#include <bits/stdc++.h>

using namespace std;

/*string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);*/

// Complete the birthday function below.
void birthday(vector<int> a, int d, int m) {
    int i, j, c, sum;
    int n = a.size();
    for(i=0;i<n;i++){
        sum = a[i];
        for(j=0;j<=(i+m-1);j++){
            sum+=a[j]; 
        }
        if(sum == d)
            c++;
    }
    cout << c;    
}

int main()
{
    int i, x;
    int d=3;
    int m = 2;
    //cin >> n;
    vector<int> arr = {1, 2, 1, 3, 2} ;
    
    cout << "\n";
    //cin >> d >> m;
    birthday(arr,d,m);
    return 0;
}
