class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int>ans(2);
        for(int i = 0;i<n; i++){
            for(int k=i+1;k<n;k++){
                int val = nums[i]+nums[k];
                if(val == target){
                ans[0]= i;
                ans[1] = k;
                }
                
                
            }
        }
        return ans;
    }
};
