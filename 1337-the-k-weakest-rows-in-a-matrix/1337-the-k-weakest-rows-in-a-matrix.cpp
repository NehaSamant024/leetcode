class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
       int n=mat[0].size();
        for(int i=0;i<mat.size();i++){
        mat[i].push_back(i);
        }
        sort(mat.begin(),mat.end());
        vector<int>v;
        for(int i=0;i<k;i++)
        {
            v.push_back(mat[i][n]);
        }
        return v;
    }
};
