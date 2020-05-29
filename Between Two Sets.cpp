https://www.hackerrank.com/challenges/between-two-sets/problem

#include <bits/stdc++.h>

using namespace std;

int getTotalX(vector<int> a, vector<int> b) {
    int m = a.size();
    int n = b.size();
    int c=0, flag =0;
    int i, j;
    int s= b[0]/2;
    for(i=a[m-1];i<s;i++){
        for(j=0;j<m;j++){
            if(i % a[j] !=0)
                flag =1;
        }
        for(j=0;j<n;j++){
            if(b[j] % i !=0)
                flag =1;
        }
        if(flag == 1)
            c++;
    }
    return c;

}

int main(){
    int m, n, i, x;
    vector<int> a;
    vector<int> b;

    for(i=0;i<m;i++){
        cin >> x;
        a.push_back(x);
    }
    for(i=0;i<n;i++){
        cin >> x;
        b.push_back(x);
    }
    int res = getTotalX(a, b );
    cout <<res ;

}
