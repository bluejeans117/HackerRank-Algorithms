#include <bits/stdc++.h>
using namespace std;

int try(vector<int> a){
    int n = a.size();
    int i, c1=0, c2=0, c3=0;
    for(i=0;i<n;i++){
        if(a[i]>0)
            c1++;
        
        else if (a[i]<0)
            c2++;
            
        else if(a[i]==0)
            c3++;
    }
    p=float(c1/n);
    n=float(c2/n);
    neu=float(c3/n);
    cout<< p<<"\n"<<n<<"\n"<<"neu"<<endl;
    return 0;
}


int main(){
    vector<int> nums;
    int n, i=0, x;
    cin >> n;
    for(i=0;i<n;i++){
        cin>>x;
        nums.push_back(x);
    }  
    try(nums);
    return 0;
}
