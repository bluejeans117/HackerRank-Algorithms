#include <bits/stdc++.h>

using namespace std;

// Complete the countingValleys function below.
int countingValleys(int n, string s) {

 int level = 0,count = 0, countD = 0;
 bool flag = false;


    for ( int i = 0; i < n; i++) {
        if (s[i] == 'D') {
            if (level == 0) flag = true;
            level--;
        }
        else {
            level++;
            if ((level == 0) && flag) {
                count++;
                flag = false;
            }
        }
    }

    return count;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    getline(cin, s);

    int result = countingValleys(n, s);

    fout << result << "\n";

    fout.close();

    return 0;
}
