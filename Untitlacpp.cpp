#include <iostream>
using namespace std;

int main() {
    int n, x, count= 0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> x;
        if(x < 0) count++;
    }
    cout << count;
    return 0;
}

