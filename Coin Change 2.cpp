class Solution {
public:
    int change(int amount, vector<int>& coins) {
        
            int c=0;
            int n = coins.size();
            for(int i=0;i<n;i++){
                if(amount % coins[i] == 0){
                    c++;
                }
            }
            for(int j=0;j<n;j++){
                int temp = amount = a[j];
                if(amount%coints[j])
            }
        }
    }
};
