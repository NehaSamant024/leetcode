/*class Solution {
public:
    int majorityElement(vector<int>& nums) {
      int n=nums.size();
        int count=0;
        int max=nums[0];
        for(int i=0;i<n-1;i++){
          //  int max=nums[0];
            if(nums[i]>max)
            {
                max=nums[i];
            }
        }              //  count++;

//https://leetcode.com/problems/majority-element/solution/        }
        return max;
    }
};
*/

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
      //  int k=nums.size()/2;
        int n=nums.size();
        
        sort(nums.begin(),nums.end());
        
        return nums[n/2];
        
    }
};
