#include <iostream>
using namespace std;

int main() {
    int n = 5; // A B C D E
    // граф (матрица)
    int g[5][5] = {
        {0,4,2,0,0}, // A
        {0,0,0,2,3}, // B
        {0,1,0,4,5}, // C
        {0,0,0,0,0}, // D
        {0,0,0,1,0}  // E
    };
    int dist[5] = {1000,1000,1000,1000,1000};
    bool used[5] = {0};

    dist[0] = 0 ; // A

    for (int i = 0; i < n; i++) {
        int u = -1;

        // ең кіші dist табу
        for (int j = 0; j < n; j++) {
            if (!used[j] && (u == -1 || dist[j] < dist[u])) {
                u = j;
            }
        }
        used[u] = true;

        for (int v = 0; v < n; v++) {
            if (g[u][v] != 0) {
                if (dist[v] > dist[u] + g[u][v]) {
                    dist[v] = dist[u] + g[u][v];
                }
            }
        }
    }
    cout << "A->A = " << dist[0] << endl;
    cout << "A->B = " << dist[1] << endl;
    cout << "A->C = " << dist[2] << endl;
    cout << "A->D = " << dist[3] << endl;
    cout << "A->E = " << dist[4] << endl;

    return 0;
}