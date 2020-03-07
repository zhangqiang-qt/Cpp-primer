#ifndef SALES_DATA_H_INCLUDED
#define SALES_DATA_H_INCLUDED
using namespace std;

class Sales_data{
public:
    friend istream &operator >> (istream&, Sales_data&);
    friend ostream &operator << (ostream &out, const Sales_data &s);
    friend bool operator == (const Sales_data&, const Sales_data&);

    Sales_data() = default;
    Sales_data(const string &book) : bookNo(book){}
    Sales_data(const string &book, const unsigned num, const double sellp, const double salep);
    Sales_data(istream &is){is >> *this;}
    string isbn() const {return bookNo;}
    Sales_data& combine(const Sales_data &rhs){
        units_sold += rhs.units_sold;
        saleprice = (rhs.saleprice * rhs.units_sold + saleprice * units_sold)
                / (rhs.units_sold + units_sold);
        if(sellingprice != 0)
            discount = saleprice / sellingprice;
        return *this;
    }
    friend istream &read(istream &is, Sales_data &item);
    friend ostream &print(ostream &os, const Sales_data &item);
    Sales_data add(const Sales_data &lhs, const Sales_data &rhs);

public:
    string bookNo;
    unsigned units_sold = 0;
    double sellingprice = 0.0;
    double saleprice = 0.0;
    double discount = 0.0;
};

Sales_data::Sales_data(const string &book, const unsigned num, const double sellp, const double salep){
    bookNo = book;
    units_sold = num;
    sellingprice = sellp;
    saleprice = salep;
    if(sellingprice != 0)
        discount = saleprice / sellingprice;
}

istream &operator >> (istream &in, Sales_data &s){
    in >> s.bookNo >> s.units_sold >> s.sellingprice >> s.saleprice;
    if(in && s.sellingprice != 0)
        s.discount = s.saleprice / s.sellingprice;
    else
        s = Sales_data();   //输入错误，重置输入的数据
    return in;
}
ostream &operator << (ostream &out, const Sales_data &s){
    out << s.isbn() << " " << s.units_sold << " "
        << s.sellingprice << " " << s.saleprice << " " << s.discount;
    return out;
}
inline bool operator == (const Sales_data &lhs, const Sales_data &rhs){
    return lhs.units_sold == rhs.units_sold &&
           lhs.sellingprice == rhs.sellingprice &&
           lhs.saleprice == rhs.saleprice &&
           lhs.isbn() == rhs.isbn();
}
istream &read(istream &is, Sales_data &item){
    is >> item.bookNo >> item.units_sold >> item.sellingprice >> item.saleprice;
    return is;
}

ostream &print(ostream &os, const Sales_data &item){
    os << item.isbn() << " " << item.units_sold << " "
        << item.sellingprice << " " << item.saleprice << " " << item.discount;
    return os;
}

Sales_data add(const Sales_data &lhs, const Sales_data &rhs){
    Sales_data sum = lhs;
    sum.combine(rhs);
    return sum;
}
#endif // SALES_DATA_H_INCLUDED
