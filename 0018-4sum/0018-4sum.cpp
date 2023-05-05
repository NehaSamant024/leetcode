/*class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        set<vector<int>> set;
        vector<vector<int>> output;
        for(int i=0; i<n-3; i++){
            for(int j=i+1; j<n-2; j++){
                for(int k=j+1; k<n-1; k++){
                    for(int l=k+1; l<n; l++){
                        if((long long)nums[i] + (long long)nums[j] + (long long)nums[k] + 
                        (long long)nums[l] == target){
                            set.insert({nums[i], nums[j], nums[k], nums[l]});
                        }
                    }
                }
            }
        }
        for(auto it : set){
            output.push_back(it);
        }
        return output;
    }
};
time limit exceed
*/
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
           set<vector<int>> s;
        vector<vector<int>> ans;
        
        if (nums.size()<4) {
            return ans;
        }
        
        sort(nums.begin(), nums.end());
        int n = nums.size();
        
        for (int i=0; i<n-3; i++) {
            for (int j=i+1; j<n-2; j++) {
                int low = j+1;
                int high = n-1;
                
                while (low<high) {
                  long long sum = (long long)nums[i] + nums[j] + nums[low] + nums[high];                    
                    if (sum == target) {
                        s.insert({nums[i], nums[j], nums[low], nums[high]});
                        low++;
                        high--;
                    }
                    else if (sum<target) {
                        low++;
                    }
                    else {
                        high--;
                    }
                }
            }
        }
        
        for (auto me : s) {
            ans.push_back(me);
        }
        
        return ans;
    }
};