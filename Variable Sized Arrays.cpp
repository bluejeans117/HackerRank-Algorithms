
#include <bits/stdc++.h>

using namespace std;


int main() {
    
    int n, q;
    int s, x;
    cin >> n >> q;
    vector<int> arr;
    int idx, pos;
    arr.resize(n);

    for(int i=0;i<n; i++){
        cin >>s;
        //vector<int> temp;
        for(int j=0;j<s; j++){
            cin >> x;
            arr.push_back(x);
        }
        //arr.push_back(temp);
    }
    for(int i=0;i<q; i++){
        cin >> idx >> pos;
        cout << arr[idx][pos] << " ";
    }
    return 0;
}
