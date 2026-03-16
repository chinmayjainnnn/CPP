#include <vector>
#include <set>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> getBiggestThree(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        set<int> uniqueSums;

        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                // Every single cell is a rhombus of radius 0
                uniqueSums.insert(grid[i][j]);
                if (uniqueSums.size() > 3) uniqueSums.erase(uniqueSums.begin());

                // Try expanding radius q
                for (int q = 1; ; ++q) {
                    int topR = i, topC = j;
                    int leftR = i + q, leftC = j - q;
                    int rightR = i + q, rightC = j + q;
                    int bottomR = i + 2 * q, bottomC = j;

                    // Check if the rhombus is within grid boundaries
                    if (bottomR >= m || leftC < 0 || rightC >= n) break;

                    int currentSum = 0;
                    
                    // Traverse 4 sides
                    // 1. Top to Right
                    for (int k = 0; k < q; ++k) currentSum += grid[topR + k][topC + k];
                    // 2. Right to Bottom
                    for (int k = 0; k < q; ++k) currentSum += grid[rightR + k][rightC - k];
                    // 3. Bottom to Left
                    for (int k = 0; k < q; ++k) currentSum += grid[bottomR - k][bottomC - k];
                    // 4. Left to Top
                    for (int k = 0; k < q; ++k) currentSum += grid[leftR - k][leftC + k];

                    uniqueSums.insert(currentSum);
                    if (uniqueSums.size() > 3) uniqueSums.erase(uniqueSums.begin());
                }
            }
        }

        vector<int> result(uniqueSums.rbegin(), uniqueSums.rend());
        return result;
    }
};