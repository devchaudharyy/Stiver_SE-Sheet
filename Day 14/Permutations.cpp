class Solution {
public:
    void func(vector<int> nums, vector<vector<int>> &ans, vector<int> &temp, int freq[])
    {
      if(temp.size()==nums.size())
      {
          ans.push_back(temp);
          return ;
      }
        
        for(int i = 0;i<nums.size();i++)
        {
             if(freq[i]==0)
             {
                 temp.push_back(nums[i]);
                  freq[i]=1;
                 func(nums,ans,temp,freq);
                 freq[i]=0;
                 temp.pop_back();
             }
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int> >ans;
        vector<int> temp;
        int n = nums.size();
        int freq[n];
        for(int i =0;i<n;i++)
            freq[i]=0;
        func(nums,ans,temp,freq);
        return ans;
    }
};
