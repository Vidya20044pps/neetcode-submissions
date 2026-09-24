class Solution {
public:

    bool subset(vector<int>arr,int sums){
        int n = arr.size();
        int t[n+1][sums+1];
        for(int i = 0;i<=n;i++){
            for(int j = 0; j<=sums;j++){
                if(j ==0){
                    t[i][j] = true;
                }
                else if(i == 0){
                    t[i][j] = false;
                }
                else if(arr[i-1]<= j){
                    t[i][j]= t[i-1][j-arr[i-1]]||t[i-1][j];
                }
                else{
                    t[i][j] = t[i-1][j];
                }
            }
            
        }
        return t[n][sums];
    }
    bool canPartition(vector<int>& nums) {
        int val=0;
        for(int i =0;i<nums.size();i++){
            val += nums[i];
        }
        int sums = val/2;
              if(val%2!=0){
                return false;
            }
           
          
            else return subset(nums,sums);
    }
};
