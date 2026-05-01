// 3. Cheapest Flights Within K Stops (#787)
#include <iostream>
using namespace std;

int main() {
    int n = 5;
    int INF = 9999;

    int g[5][5] = {
        {0, 4, 2, 0, 0},
        {0, 0, 0, 2, 3},
        {0, 1, 0, 4, 5},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 1, 0}
    };

    int dist[5];
    bool visited[5];

    for (int i = 0; i < n; i++) {
        dist[i] = INF;
        visited[i] = false;
    }

    dist[0] = 0;

    for (int k = 0; k < n; k++) {
        int u = -1;

        for (int i = 0; i < n; i++) {
            if (!visited[i] && (u == -1 || dist[i] < dist[u])) {
                u = i;
            }
        }

        visited[u] = true;

        for (int v = 0; v < n; v++) {
            if (g[u][v] != 0 && dist[u] + g[u][v] < dist[v]) {
                dist[v] = dist[u] + g[u][v];
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cout << "0 -> " << i << " = " << dist[i] << endl;
    }

    return 0;
}