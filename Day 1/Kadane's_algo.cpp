class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int i=0,j=0;
        int ans = INT_MIN;
        int sum = 0;
       for( i = 0;i<nums.size();i++)
       {
           sum += nums[i];
           ans = max(ans, sum);
           if(sum<0) sum = 0;
       }
return ans;
    }
};
