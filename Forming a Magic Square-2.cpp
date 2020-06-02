#include <bits/stdc++.h>

using namespace std;

// Complete the formingMagicSquare function below.
int formingMagicSquare(vector<vector<int>> s) {
    int n = s.size();
    vector<int> temp;
    vector<bool> dup;
    int i, count = 0,j;

    for ( i = 0; i < n; i++) {
        for ( j = 0; j < n; j++) {
            temp.push_back(s[i][j]);
        }
    }

    for ( i = 0; i < n; i++) {
        for ( j = 0; i < n; j++) {
            if (temp[i] == temp[j])
                dup[i] = true;  
        }
    }

    i = 0;

    while (i < n-2) {
        if ( temp[i]+temp[i+1]+temp[i+2] ==15 )
            continue;
        else {
            if (dup[i])
                count+=(15-temp[i+1]-temp[i+2]);
            if (dup[i+1])
                count+=(15-temp[i+2]-temp[i]);
            if (dup[i+2])
                count+=(15-temp[i+1]-temp[i]);
        }
        i+=3;
    }

    return count;
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
