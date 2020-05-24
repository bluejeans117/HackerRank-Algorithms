
#include <bits/stdc++.h>
using namespace std;

void fun(int n , vector<int> a){
    sort(a.begin(), a.end());
    int i=0, c=1, p=0;
    //for(i=0;i<n;i++){
    while (i<n-1) {
        if(a[i]==a[i+1]){
            c+=1;
            i++;
        }
        else if(a[i]!=a[i+1]){
            p+=c/2;
            c=0;
        }
    }
    cout << p ;       
}
    
int main(){
    int n,x ;
    cin >> n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        cin >> x;
        arr.push_back(x);
    }
    fun(n, arr);
    return 0;
}
