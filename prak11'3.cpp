#include <iostream>
#include <vector>
using namespace std;

int uniquePaths(int m, int n) {//есепті шығаратын функция
    vector<vector<int>> dp(m, vector<int>(n, 1));//бәрін 1-ге толтырған кесте

    for (int i = 1; i < m; i++) {
        for (int j = 1; j < n; j++) {
            dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
        }
    }

    return dp[m - 1][n - 1];
}

int main() {
    int m = 3, n = 7;
    cout << uniquePaths(m, n);
    return 0;
}