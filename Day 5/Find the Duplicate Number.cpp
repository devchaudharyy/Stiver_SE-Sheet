class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        map<int,int> hash;
        for(int i = 0;i<n;i++) 
        {
            hash[nums[i]]++;
            if(hash[nums[i]]>1)
            return nums[i];
        }    
        return 0;
        }
        };
