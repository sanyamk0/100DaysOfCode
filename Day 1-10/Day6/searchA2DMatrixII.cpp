// 240. Search a 2D Matrix II
class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        int row = matrix.size(), col = matrix[0].size();
        int rowIndex = 0, colIndex = col - 1;
        while (rowIndex < row && colIndex >= 0)
        {
            int element = matrix[rowIndex][colIndex];
            if (element == target)
            {
                return true;
            }
            if (element < target)
            {
                rowIndex++;
            }
            else
            {
                colIndex--;
            }
        }
        return false;
    }
};