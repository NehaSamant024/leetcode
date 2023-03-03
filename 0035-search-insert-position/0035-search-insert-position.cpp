class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low=0;
        int high=nums.size()-1;
       
        while(low<=high)
        { int mid=low+(high-low)/2;
          if(nums[mid]<target)
                low=mid+1;
            else if(nums[mid]>target)
                high=mid-1;
         else
         return mid;
            
            
        }
        return low;//if not found then at the end we have to return low . ideal place after which we should keep it into our array
    }
};