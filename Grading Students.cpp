#include <bits/stdc++.h>

using namespace std;

int fun(vector<int> a){
    int i, q ;
    int n=a.size();
    for(i=0;i<n;i++){
    if(a[i]>=38){
        q= a[i]/5;
        num1 = q+1;
        num2 = num1 * 5;
        diff = num2-a[i];
        if(diff<3){
            a[i] = num2;
        }
    }
    return a;
}

int main(){
    int n;
    cin >> n;
    vector<int> arr;
    for(i=0;i<n;i++){
        cin >> x;
        arr.push_back(x);
    }
    fun(arr);
    for(int i=0; i < arr.size(); i++)
      std::cout << arr.at(i) << "\n";
}
    return 0;
}
