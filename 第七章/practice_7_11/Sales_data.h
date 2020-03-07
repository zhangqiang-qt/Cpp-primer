#ifndef SALES_DATA_H_INCLUDED
#define SALES_DATA_H_INCLUDED
using namespace std;

class Sales_data{
public:
    friend istream &operator >> (istream&, Sales_data&);
    friend ostream &operator << (ostream &out, const Sales_data &s);
    Sales_data() = default;
    Sales_data(const string &book) : bookNo(book){}
    Sales_data(const string &book, const unsigned num, const double sellp, const double salep);
    Sales_data(istream &is){is >> *this;}
    string isbn() const {return bookNo;}

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
#endif // SALES_DATA_H_INCLUDED
