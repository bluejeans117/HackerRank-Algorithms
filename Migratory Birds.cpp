#include <bits/stdc++.h>

using namespace std;

int main()  
{   
    int n, max;
    cin >> n;
    vector<int> arr;   
    for(i=0;i<n;i++){
        cin >>x;
        arr.push_back(x);
    }

    int fr[length];  
    int visited = -1;  
      
    for(int i = 0; i < length; i++){  
        int count = 1;  
        for(int j = i+1; j < length; j++){  
            if(arr[i] == arr[j]){  
                count++;  
                fr[j] = visited;  
            }  
        }  
        if(fr[i] != visited)  
            fr[i] = count;  
    }  

    for(int i = 0; i < length; i++){  
        if(fr[i] != visited){  
            printf("%d, %d", arr[i], fr[i]);  
        }
    }
    max = fr[i];
    for(int i=0;i<n;i++){
        if(max < fr[i]){
            max = fr[i];
        } 
    }
    return 0;  
}  
