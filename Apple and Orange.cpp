#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the countApplesAndOranges function below.
void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) {
    int i, c1, c2;
    for(i=0;i<m;i++){
        apples[i]+=a;
    }
    for(i=0;i<n;i++){
        oranges[i]+=b;
    }
    if(apples[i]>=s && apples[i]<=t )
        c1++;
    if(oranges[i]>=s && oranges[i]<=t )
        c2++;
    cout << c1 << "\n" << c2<< endl;
}

int main()
{
    int s, t, a , b ;
    vector<int> apples;
    vector<int> oranges;
    int i;
    for(i-0;i<n;i++){
        
    }

}
