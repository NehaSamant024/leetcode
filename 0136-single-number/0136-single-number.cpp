class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            ans=ans^nums[i];
        }
        return ans;
    }
};
//The result of XOR is 1 if the two bits are different. 