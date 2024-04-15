class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> s;

        // Eliminating duplicate elements

        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
        }
        // Finding third maximum when size of set >= 3
        if(s.size() >= 3){
            int index = s.size()-3;
            auto thirdMax= next(s.begin(), index);
            return *thirdMax;
        }

        return *--s.end();

            
    }
};