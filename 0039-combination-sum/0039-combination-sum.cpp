class Solution {
public:
    set<vector<int>>ans;
    void solve(vector<int>& nums, int t,int idx,vector<int>&arr){
        if(t==0){
            ans.insert(arr);
            arr.pop_back();
            return;
        }
        if(t<0){
            arr.pop_back();
            return;
        }
        for(int i=idx;i<nums.size();i++){
            arr.push_back(nums[i]);
            solve(nums,t-nums[i],i,arr);
        }
        arr.pop_back();
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>arr;
        vector<vector<int>>res;
        sort(candidates.begin(),candidates.end());
        solve(candidates,target,0,arr);
        for(auto num : ans)
            res.push_back(num);
        return res;
    }
};