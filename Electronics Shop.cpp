#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

void getMoneySpent(vector<long> k, vector<long> d, long b) {
    long i=0, j=0;
    long max=-1, sum =0;
    long m = k.size();
    long n = d.size();
    //while(i>0){
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                sum = k[i] + d[j];
                if(sum>max && sum <= b){
                    max = sum ;
                }
            }
        }
        cout << max;
}

int main()
{
    long b, m, n ;
    cin >> b >> m >> n;
    vector<long> k;
    vector<long> d;
    long i, j, x;

    for(i=0;i<m;i++){
        cin >> x;
        k.push_back(x);
    }
    for(i=0;i<n;i++){
        cin >> x;
        d.push_back(x);
    }
getMoneySpent(k, d, b);
    return 0;
}
