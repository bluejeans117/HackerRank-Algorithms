#include <bits/stdc++.h>

using namespace std;

// Complete the kangaroo function below.
void kangaroo(int x1, int v1, int x2, int v2) {
    int i;
    if(x2>x1 && v2>v1)
        cout << "NO";
    else if((x2-x1)%(v1-v2) == 0)
        cout<<"YES";
    else 
        cout << "NO";
}

int main(){
    int x1,v1,x2,v2;
    cin >> x1 >> x2 >> v1 >> v2;
    kangaroo(x1, x2, v1, v2); 
    return 0;
}
