class Solution {
public:
    
    void funcf (vector<int> &arr, int ind,int n, vector<vector<int>> &res,vector<int> ds)
    {
        if(ind==n){
            res.push_back(arr);
            return;
        }
        
        arr.push_back(ds[ind]);
        funcf(arr,ind+1,n,res,ds);
        arr.pop_back();
        funcf(arr,ind+1,n,res,ds);
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
     vector<vector<int>> ans;
        vector<int> arr;
        int n = nums.size();
        funcf(arr,0,n,ans,nums);
        return ans;
    }
};
