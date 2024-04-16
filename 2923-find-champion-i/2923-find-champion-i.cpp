class Solution {
public:
    // time/space: O(n ^ 2)/O(1)
    int findChampion(vector<vector<int>>& grid) {
        int n = grid.size();
        for (int i = 0; i < n; i++) {
            if (isChampion(grid, i)) return i;
        }
        return -1;
    }
private:
    bool isChampion(vector<vector<int>>& grid, int i) {
        int n = grid.size();
        for (int j = 0; j < n; j++) {
            if (i == j) continue;
            if (grid[i][j] == 0) return false;
        }
        return true;
    }
};