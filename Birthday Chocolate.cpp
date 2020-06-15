https://www.hackerrank.com/challenges/the-birthday-bar/problem

#include <bits/stdc++.h>

using namespace std;


void birthday(vector<int> a, int d, int m) {
     int i, j, c=0, cnt =0;
    int sum=0;
    int n = a.size();
    for(i=0;i<(n-m);i++){
        sum = a[i];
        j=i+1;
        while(cnt < m ){
            sum+=a[j];
            cnt++;
        }
        if(sum == d){
            c++;
            sum =0;
        }
    }
    cout << c;    
}

int main()
{
    int i, x, n, d, m;
    cin >> n;
    vector<int> arr;
    for(i=0;i<n;i++){
        cin >> x;
        arr.push_back(x);
    }
    cout << "\n";
    cin >> d >> m;
    birthday(arr,d,m);
    return 0;
}
