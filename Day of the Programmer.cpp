#include <bits/stdc++.h>

using namespace std;

// Complete the dayOfProgrammer function below.
string dayOfProgrammer(int year) {
    string diff;
    if(year< 1918){
        if((year%4) ==0)
            diff = "13";
        else
            diff = "12";
    }
    if(year> 1918){
        if((year%4) ==0 && (year%400)==0 && (year%100)!=0)
            diff = "13";
        else
            diff = "12";
    }
    return diff;
}

int main(){
    string year;
    getline(cin,year);
    int day = dayOfProgrammer(year);
    cout << day << ".09." << year;
    return 0;
}
