#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> pascalTriangle(int n)
{

    vector<vector<int>> pascal(n); // Creating a 2D vector with 'n' rows

    for (int i = 0; i < n; i++)   // Loop through each row
    {
        pascal[i].resize(i + 1);  // Resize the row to have 'i + 1' elements

        for (int j = 0; j < i + 1; j++)  // Loop through each element in the row
        {
            if (j == 0 || j == i)  // First and last elements are always 1
            {
                pascal[i][j] = 1;
            }
            else          // Other elements are the sum of the two elements above 
            {
                pascal[i][j] = pascal[i - 1][j] + pascal[i - 1][j - 1];
            }
        }
    }
    return pascal;    // Return the generated Pascal's Triangle
}

int main()
{

    int n;
    cin >> n;

    vector<vector<int>> ans;
    ans = pascalTriangle(n);
    for (unsigned int i = 0; i < ans.size(); i++)
    {
        for (unsigned int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

// 7291094332