#include <iostream>
#include <vector>
#include <limits>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of array elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int K, L;
    cout << "Enter indices K and L (starting from 0): ";
    cin >> K >> L;

    if (K > L) swap(K, L); // ensure K <= L

    int sum = 0;
    int minimum = numeric_limits<int>::max();
    int maximum = numeric_limits<int>::min();

    for (int i = K; i <= L; i++) {
        sum += arr[i];
        if (arr[i] < minimum) minimum = arr[i];
        if (arr[i] > maximum) maximum = arr[i];
    }

    double average = (double)sum / (L - K + 1);

    cout << "a) Sum: " << sum << endl;
    cout << "b) Average: " << average << endl;
    cout << "c) Minimum: " << minimum << ", Maximum: " << maximum << endl;

    return 0;
}


