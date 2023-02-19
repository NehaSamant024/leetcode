/*class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int count[101]={0};
        int i,j;
        int unequal=0;
        for(int i=0;i<heights.size();i++)
        {
            count[heights[i]]++;
        }
        i=0;
        for(int j=0;j<101;)
        {
            if(count[j]==0)
            {
                j++;
                continue;
            }
            if(heights[i]!=j)
            {
                unequal++;
                i++;
                count[j]--;
            }
            return unequal;
        }
    }
};
*/
class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>expected;
        expected=heights;
        int count=0;
        sort(heights.begin(),heights.end());
        
            for(int i=0;i<heights.size();i++)
            {
                if(heights[i]!=expected[i])
                {
                    count++;
                }
            }
            return count;
        }
    };