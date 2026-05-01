#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "please enter broo ";
    cin >> n;

    int cnt = 0;

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) { 
            cnt++;
        }
    }
    if (cnt == 2)
        cout << n << "  zhai san." << endl;
    else
        cout << n << " — zhai san emes." << endl;
    return 0;
}
