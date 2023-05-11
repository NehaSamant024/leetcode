class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        if(n==0)
            return 0;
        set<char> st;
        int maxsize=0;
        int start=0,end=0;
        while(start<n)
        {
            if(st.count(s[start])==0)
            {
                st.insert(s[start]);
                maxsize=max(maxsize,(int)st.size());
                start++;
            }
            else
            {
                st.erase(s[end]);
                end++;
            }
        }
        return maxsize;
    }
};	