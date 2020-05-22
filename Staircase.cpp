#include <bits/stdc++.h>

using namespace std;

// Complete the staircase function below.
void staircase(int n) {
    int i;
    char c = ' ';
    char v = '#';
    for(i=1;i<=n;i++){
        cout << string((n-i),c) << string(i,v)<<endl;
    }


}

int main()
{
    int n;
    cin >> n;

    staircase(n);

    return 0;
}
