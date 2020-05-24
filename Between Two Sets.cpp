
#include <bits/stdc++.h>
using namespace std;

int fun(int  m,int n,vector<int> a,vector<int> b ){
    int i,j ;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end()); 
    
    vector<int> z;
    vector<int> y;
    vector<int> f;


    int max = a[m-1];
    int min = b[0];
    for(i=max;i<=(min/2);i++){          //check 1st set
        for(j=0;j<m;j++){
            if(i%a[j] == 0){            //how to check i satisfies the condition for every element of a
                z.push_back(i);         //array to store elts which satisfy the condtition
                f[i]=1;
            }
        }

        //for(j=0;j<n;j++){         //check 2nd set
        while(j<n){
            if(b[j]%z[i]==0)            //how to check i satisfies the condition for every element of a
                y.push_back(z[i]);       //array to store elts which satisfy the condtition
        }
    }   
    cout << y.size();

}

int main(){
    int x, i, m, n;
    vector<int> a;
    vector<int> b ;
    cin >>m>>n;
    for(i=0;i<m;i++){
        cin >> x;
        a.push_back(x);
    }
    for(i=0;i<n;i++){
        cin >> x;
        b.push_back(x);
    }
    fun(m,n,a,b)
}
