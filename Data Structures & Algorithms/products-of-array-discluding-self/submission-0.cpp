class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n =  nums.size();
        vector<int>pr(n);
        vector<int>po(n);
        vector<int>ans(n);
        int sum = 1;
        int sum1=1;
        pr[0] = 1;
        po[n-1] = 1;
        int i =1;
        int j = n-2;
        while(i<n){
          pr[i] = sum*nums[i-1];
            sum = pr[i];
            i++;
        }
        while(j>=0){
           po[j] = nums[j+1]*sum1;
           sum1 = po[j];
            j--;

        }
        for(int i =0;i<n;i++){
            ans[i] = pr[i]*po[i];
        }
        return ans;
    }
};
