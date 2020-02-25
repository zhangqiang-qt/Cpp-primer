#include<iostream>
#include<vector>

using namespace std;

int main(){
    //This is the answer of 5.5
    int grade;
    cout << "Enter your score: ";
    cin >> grade;
    if(grade < 0 || grade > 100){
        cout << "The score you input is illegal." << endl;
        return -1;
    }
    if(grade == 100){
        cout << "The grade of letter is: " << "A++" << endl;
        return 0;
    }
    if(grade < 60){
        cout << "The grade of letter is: " << "F" << endl;
        return 0;
    }
    int iU = grade / 10;
    int iT = grade % 10;
    string score, level, lettergrade;
    if(iU == 9)
        score = "A";
    else if(iU == 8)
        score = "B";
    else if(iU == 7)
        score = "C";
    else
        score = "D";

    if(iT < 3)
        level = "-";
    else if(iT > 7)
        level = "+";
    else
        level = "";
    lettergrade = score + level;
    cout << "The grade of letter is: " << lettergrade << endl;

    //5.6
    int iU1 = grade / 10;
    int iT1 = grade % 10;
    string score1, level1, lettergrade1;

    score1 = (iU1 == 9) ? "A" :
                        (iU1 == 8) ? "B" :
                                    (iU1 == 7) ? "C" : "D";
    level1 = (iT1 < 3) ? "-" :
                        (iT1 > 7) ? "+" : "";
    lettergrade1 = score1 + level1;
    cout << "The grade of letter is: " << lettergrade1 << endl;
    return 0;
}
