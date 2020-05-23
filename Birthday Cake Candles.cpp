#include <bits/stdc++.h>

using namespace std;

//vector<string> split_string(string);

// Complete the birthdayCakeCandles function below.
void birthdayCakeCandles(vector<int> ar) {
    int n = ar.size();
    sort(ar.begin(), ar.end());
    int max = ar[n-1];
    int i;
    int count =0;
    for(i=n-1;i>=0;i--){
        if(ar[i]== max){
            count++;
        }
    }
    cout <<  count;

}

int main(){
    vector<int> ar;
    int i =0;
    int n,x;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> x;
        ar.push_back(x);
    }
    birthdayCakeCandles(ar);
    return 0;
}
