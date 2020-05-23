#include <bits/stdc++.h>

using namespace std;

int dayOfProgrammer(int year) {
    int diff;
    if(year < 1918){
        if((year%4) ==0)
            diff = 12;
        else
            diff = 13;
    } else if(year> 1918){
        if (((year%4 == 0) && (year%100 != 0)) || (year%400 == 0))
            diff = 12;
        else
            diff = 13;
    }
    else return 26;
    return diff;
}

int main(){
    int year;
    cin>>year;
    int day = dayOfProgrammer(year);
    cout << day << ".09." << year;
    return 0;
}
