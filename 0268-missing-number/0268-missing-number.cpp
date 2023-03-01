class Solution {
public:
    int missingNumber(vector<int>& nums){
        int low=0;
        int high=nums.size()-1;
        int mid=low+(high-low)/2;
        sort(nums.begin(),nums.end());
        while(low<=high)
        {
            if(nums[mid]<=mid)
                low=mid+1;
            else
                high=mid-1;
            mid=low+(high-low)/2;
        }
        return low;
    }
                
        

        

};