class Solution {
public:
    void func( int ind,vector<int> arr, int target,vector<vector<int>> &ans, vector<int> ds)
    {
        if(ind == arr.size())
        {
            if(target == 0)
             ans.push_back(ds);
            
            return;
        }
        
        if(arr[ind]<=target){
            ds.push_back(arr[ind]);
            func(ind,arr,target-arr[ind],ans,ds);
            ds.pop_back();
            }
        
        func(ind+1,arr,target,ans,ds);
    }
    
    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        func(0,arr,target,ans,ds);
        return ans;
        
    }
};
