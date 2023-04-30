class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        // transpose of matrix
        int n=matrix.size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<i;j++)
                swap(matrix[i][j],matrix[j][i]);
        }
        // finding the reverse of matrix
        for(int i=0;i<n;i++)
            reverse(matrix[i].begin(),matrix[i].end());
    }
};
// tc=o(n^2);
//sc=o(1);