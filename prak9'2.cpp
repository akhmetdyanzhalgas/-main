#include <iostream>
#include <vector>
using namespace std;

void dfs(int u, vector<vector<int>>& g, vector<int>& vis) {
    vis[u] = 1;
    for (int v : g[u]) { //көршілерді қарайды
        if (!vis[v]) {
            dfs(v, g, vis);
        }
    }
}
int main() {
    int n = 5;
    vector<vector<int>> edges = {{0,1},{0,2},{0,3},{1,4}};

    if (edges.size() != n - 1) {
        cout << "false";
        return 0;
    }

    vector<vector<int>> g(n);
    for (auto e : edges) {
        g[e[0]].push_back(e[1]); // байланыс қосу
        g[e[1]].push_back(e[0]); // екіжақты болғандықтан кері бағыт та қосылады
    }

    vector<int> vis(n, 0);
    dfs(0, g, vis);

    for (int i = 0; i < n; i++) {
        if (!vis[i]) {
            cout << "false";//онда ағаш емес
            return 0;
        }
    }

    cout << "true";//бәрі байланысса ағаш 
}