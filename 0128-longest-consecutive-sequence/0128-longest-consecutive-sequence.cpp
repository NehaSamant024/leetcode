class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n==0) return 0;
        unordered_set<int>st;
        for(int i:nums)st.insert(i);
        int globalen=0;
        for(int i:st)
        {
            if(!st.count(i-1)){
                int currlen=1;
                int currnum=i;
                while(st.count(currnum+1))
                {
                    currlen++;
                    currnum++;
                }
                globalen=max(currlen,globalen);
            }
        }
        return globalen;
    }
};