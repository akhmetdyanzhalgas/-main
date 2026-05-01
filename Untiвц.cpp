#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int count = 0;
    for (int i = 1; i <= n; i++) {
        int x = i;
        int sum = 0;
        while (x > 0) {
            sum += x % 10;
            x /= 10;
        }
        if (sum != 0 && i % sum == 0)
            count++;
    }
    cout << count << endl;
    return 0;
}

