#include <bits/stdc++.h>

using namespace std;

// Complete the formingMagicSquare function below.
int formingMagicSquare(vector<vector<int>> s) {
    
    int i, j;
    int sum, c=0, diff=0;
    for(i=0;i<3;i++){
        //for(j=0;j<3;j++){
        sum =0;
        sum = s[i][0] + s[i][1] + s[i][2] ;
        diff = abs(15 - sum)  ;
        c+= diff;
        
    }

    return c ;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    vector<vector<int>> s(3);
    for (int i = 0; i < 3; i++) {
        s[i].resize(3);

        for (int j = 0; j < 3; j++) {
            cin >> s[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = formingMagicSquare(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
