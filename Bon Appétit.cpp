#include <bits/stdc++.h>

using namespace std;

// Complete the bonAppetit function below.
void bonAppetit(vector<int> a, int k, int b) {
    int n = a.size();
    int i, sum1=0, sum2=0;
    int diff, final;
    for(i=0;i<n;i++){
        sum1 += a[i];
    }
    sum2 = sum1/2;

    final = sum2 -(a[k]/2);
    if (b == final)
        cout << "Bon Appetit";
    else {
        diff = b - final;
        cout << diff;
    }

}

int main()
{
   int b, n , k, i;
   int x ;
   cin >> n;
   cin >> k;

   vector<int> a;
   for(i=0;i<n ;i++){
       cin >> x;
       a.push_back(x);
   }
   cin >> b;
   bonAppetit(a, k, b);
return 0;
}
