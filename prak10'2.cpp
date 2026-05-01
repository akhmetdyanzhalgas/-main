// 9. Bellman-Ford 
#include <iostream>
using namespace std;

int main() {
    int n = 4;
    int dist[4];

    for (int i = 0; i < n; i++) dist[i] = 9999;

    dist[0] = 0;

    int u[] = {0, 0, 1, 2};
    int v[] = {1, 2, 2, 3};
    int w[] = {4, 5, -2, 3};

    int edges = 4;

    
            if (dist[u[j]] + w[j] < dist[v[j]]) {//u-ға дейінгі жол + қабырға<v-ға дейінгі ескі жол
                dist[v[j]] = dor (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < edges; j++) {ist[u[j]] + w[j];
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cout << "0 -> " << i << " = " << dist[i] << endl;
    }

    return 0;
}