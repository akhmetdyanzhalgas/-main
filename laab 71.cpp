#include <iostream>
using namespace std;
int main() {
    int n, x, i = 0;
    double sum = 0;
    cout <<  "n please enter___";
    cin >> n;
    while (i < n) {
        cout << i + 1 << "-san: ";
        cin >> x;
        sum += x;
        i++;
    }
    cout << "ortasha man_____ " << sum / n << endl;
    return 0;
}

