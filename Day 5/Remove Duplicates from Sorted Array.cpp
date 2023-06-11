class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int size = nums.size();
        if(size==0)
            return 0;
        int i = 0;
        for(int j =0;j<size;j++)
        {
            if(nums[i]==nums[j])
                continue;
            else
            {
              i=i+1;
                nums[i]=nums[j];
            }
        }
        
   return i + 1;
    }
};
