#include <iostream>
#include <string>
#include <stack>
#include <queue>
#include <algorithm>
using namespace std;

int graph[10][10];

class City {
public:
    int id;
    string name;

    City(int i, string n) {
        id = i;
        name = n;
    }

    void show() {
        cout << id << " " << name << endl;
    }
};

struct Node {
    City* data;
    Node* next;

    Node(City* c) {
        data = c;
        next = NULL;
    }
};

class List {
public:
    Node* head = NULL;

    void add(City* c) {
        Node* temp = new Node(c);
        temp->next = head;
        head = temp;
    }
};

stack<int> st;

void addRoute(int city) {
    st.push(city);
}

int undo() {
    if (!st.empty()) {
        int c = st.top();
        st.pop();
        return c;
    }
    return -1;
}

void sortPrices(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
            }
        }
    }
}

int findCity(int a[], int n, int id) {
    for (int i = 0; i < n; i++) {
        if (a[i] == id)
            return i;
    }
    return -1;
}

struct Tree {
    int id;
    Tree* left;
    Tree* right;
};

Tree* insert(Tree* root, int id) {
    if (!root) {
        root = new Tree();
        root->id = id;
        root->left = root->right = NULL;
        return root;
    }

    if (id < root->id)
        root->left = insert(root->left, id);
    else
        root->right = insert(root->right, id);

    return root;
}

priority_queue<int, vector<int>, greater<int>> pq;

void addPrice(int p) {
    pq.push(p);
}

void addEdge(int u, int v, int w) {
    graph[u][v] = w;
    graph[v][u] = w;
}

void dijkstra(int n, int start) {
    int dist[10];
    bool visited[10];

    for (int i = 0; i < n; i++) {
        dist[i] = 1000;
        visited[i] = false;
    }

    dist[start] = 0;

    for (int i = 0; i < n; i++) {
        int u = -1;

        for (int j = 0; j < n; j++) {
            if (!visited[j] && (u == -1 || dist[j] < dist[u]))
                u = j;
        }

        visited[u] = true;

        for (int v = 0; v < n; v++) {
            if (graph[u][v] && dist[v] > dist[u] + graph[u][v]) {
                dist[v] = dist[u] + graph[u][v];
            }
        }
    }

    for (int i = 0; i < n; i++)
        cout << i << " " << dist[i] << endl;
}

struct Edge {
    int u, v, w;
};
void bellmanFord(int n, int m, Edge edges[], int start) {
    int dist[10];

    for (int i = 0; i < n; i++)
        dist[i] = 1000;

    dist[start] = 0;

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < m; j++) {
            if (dist[edges[j].u] + edges[j].w < dist[edges[j].v]) {
                dist[edges[j].v] = dist[edges[j].u] + edges[j].w;
            }
        }
    }

    cout << "Bellman-Ford:\n";
    for (int i = 0; i < n; i++)
        cout << i << " " << dist[i] << endl;
}
void greedy(int a[], int n) {
    sort(a, a + n);
}
void addNewEdge(int u, int v, int w) {
    graph[u][v] = w;
}
int main() {
    int n = 5;

    addEdge(0, 1, 10);
    addEdge(0, 2, 5);
    addEdge(1, 3, 1);
    addEdge(3, 4, 4);

    dijkstra(n, 0);

    Edge edges[4] = {
        {0,1,10},{0,2,5},{1,3,1},{3,4,4}
    };

    bellmanFord(n, 4, edges, 0);

    return 0;
}