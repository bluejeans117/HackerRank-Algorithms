#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int i, x, n;
    vector<int> a;
    cin >> n;
    vector<int>::iterator it;
    for(i=0;i<n;i++){
        cin >> x;
        a.push_back(x);
    }
    for(it=a.end()-1;it>=a.begin();it--){
        cout << *it<< " ";
    }
    return 0;
}
