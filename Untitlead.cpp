#include <iostream>
using namespace std;

void kvadrat(int n, char c) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << c << " ";
        }
        cout << endl;
    }
}
