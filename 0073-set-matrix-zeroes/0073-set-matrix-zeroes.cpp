class Solution {
public:
    void setZeroes(vector<vector<int>>& arr) {
        
        int r = arr.size();
        int c = arr[0].size();
     vector<int>rows,cols;
        for(int i=0;i<r;i++){
            for(int j =0;j<c;j++){
                if(arr[i][j] == 0)
                {
                    rows.push_back(i);
                    cols.push_back(j);    }
            }
        }
        for(auto row : rows) {
            for(int col = 0;col<c;col++)
            arr[row][col] = 0;
        }

        for(auto col : cols){
            for(int row = 0;row<r;row++)
            arr[row][col] = 0;
        }
    }
};