#include <bits\stdc++.h>
using namespace std;
class Solution
{
public:
    bool searchMatrix(vector<vector<int>> matrix, int target)
    {
        for (int i = 0; i < matrix.size(); i++)
        {
            vector<int> InnerMatrix = matrix[i];
            int left = 0;
            int right = InnerMatrix.size() - 1;
            while (left <= right)
            {
                int mid = (left + right) / 2;
                if (InnerMatrix[mid] == target)
                {
                    return true;
                    //break;
                }
                else if (InnerMatrix[mid] < target)
                {
                    left = mid + 1;
                }
                else
                {
                    right = mid - 1;
                }
            }
        }
        return false;
    }
};
int main()
{
    cout << Solution().searchMatrix({{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}}, 50);
    return 0;
}