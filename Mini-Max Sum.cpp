#include <bits/stdc++.h>

using namespace std;

void fun(vector<int> nums){
    sort(nums.begin(), nums.end());
    int n =nums.size();
    int i, min =0, max=0;
    for(i=0;i<n-1;i++){
        min+=nums[i];
    }
    for(i=1;i<n;i++){
        max+=nums[i];
    }
    cout<< min << " "<< max;

}
int main(){
    vector<int> nums;
    int x;
    for(i=0;i<5;i++){
        cin>>x;
        nums.push_back(x);
    }
    fun(nums);
return 0;
}
