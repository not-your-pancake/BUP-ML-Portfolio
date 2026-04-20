#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int getLCS(string text1, string text2) {
    int n = text1.size();
    int m = text2.size();

    // Create a grid filled with zeros
    // It has (n+1) rows and (m+1) columns
    vector<vector<int>> grid(n + 1, vector<int>(m + 1, 0));

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (text1[i - 1] == text2[j - 1]) {
                // It's a match! Move diagonally and add 1
                grid[i][j] = grid[i - 1][j - 1] + 1;
            } else {
                // No match. Take the best score from top or left
                grid[i][j] = max(grid[i - 1][j], grid[i][j - 1]);
            }
        }
    }

    // The answer is in the bottom-right corner
    return grid[n][m];
}

int main() {
    string s1 = "APPLE";
    string s2 = "ALE";
    cout << "Longest Chain Length: " << getLCS(s1, s2) << endl;
    return 0;
}
