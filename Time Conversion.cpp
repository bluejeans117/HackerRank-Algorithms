#include <bits/stdc++.h>
#include<stdlib.h>

using namespace std;

/*
 * Complete the timeConversion function below.
 */
string timeConversion(string s) {
    stringstream idk(s.substr(0,2));
    int hr = 0;
    idk >> hr;

    if(s[8]=='P'){
        hr != 12? hr += 12 : hr = hr;
    } else if (hr == 12)
        hr = 0;
    int tmp = hr/10;
    s[0] = '0' + tmp;
    tmp = hr%10;
    s[1] = '0' + tmp;
    s.erase(8);
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
