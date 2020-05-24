#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n, sum=0, x;
    cin >> n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        cin >> x;
        arr.push_back(x);
    }
    for(int i=0;i<n;i++){
        sum+=arr[i]; }
    cout << sum;
    return 0;
}
