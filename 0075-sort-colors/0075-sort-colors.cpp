class Solution {
public:
    void sortColors(vector<int>& nums) {
        int r=0,w=0,b=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0){
                r++;
            }
            if(nums[i]==1)
            {
                w++;
            }
            if(nums[i]==2)
            {
                b++;
            }
        }
        for(int j=0;j<nums.size();j++)
        {
            if(r!=0)
            {
                nums[j]=0;
                r--;
            }
            else if(w!=0)
            {
                nums[j]=1;
                w--;
            }
            else if(b!=0)
            {
                nums[j]=2;
                b--;
            }
        }
        
    }
};