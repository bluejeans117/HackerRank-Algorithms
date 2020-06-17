#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Prlong output to STDOUT */   
    long n,x;
    cin >> n;
    vector<int> vect;
    for(long i=0;i<n;i++){
        cin >> x;   
        vect.push_back(x);
    }

    long p;
    cin >> p;
    vect.erase(vect.begin()+(p-1));
    long k, m;
    cin >> k >> m;
    vect.erase(vect.begin()+(k-1) , vect.begin()+(m-1));
    long n1;
    n1 = vect.size();
    cout << n1 << endl ;
    for(long i=0;i<n1;i++){
        cout << vect[i]<< " ";
    }
    
    return 0;
}
