#include <iostream>//тапсырдым
using namespace std;
int n = 3, m = 3;
char g[3][3] = {
    {'1','1','0'},
    {'1','0','0'},
    {'0','0','1'}
};
void dfs(int i, int j) {
    if (i < 0 || j < 0 || i >= n || j >= m || g[i][j] == '0')
        return;
    g[i][j] = '0';

    dfs(i+1, j);
    dfs(i-1, j);
    dfs(i, j+1);
    dfs(i, j-1);
}
int main() {
    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (g[i][j] == '1') {
                count++;
                dfs(i, j);
            }
        }
    }
    cout << count;
}