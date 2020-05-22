#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the timeConversion function below.
 */
string timeConversion(string s) {
    //string hr;
    if(s[8]=='P'){
       if(s[0]=='1'&& s[1]=='2'){
            s.pop_back();
            s.pop_back();
        }
        else{
        s[0] = s[0]+'1';
        s[1] = s[1]+'2';     //add 12 to given hh
        s.pop_back();
        s.pop_back();
        }
    }
    else if(s[8]=='A'){
        //hr=s[0]+s[1];
        if(s[0]=='1'&& s[1]=='2'){
            s[0]=0;
            s[1]=0;
            s[3]=0;
            s[4]=0;
            s[6]=0;
            s[7]=0;
            s.pop_back();
            s.pop_back();
        }
        else{
            s.pop_back();
            s.pop_back();
        }
    }
    return s;
}

int main()
{
    //ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);
    cout << result;
    return 0;
}
