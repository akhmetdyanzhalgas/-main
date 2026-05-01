
#include <iostream>
using namespace std;
void reverseArray(int a[], int n) {
    for (int i = n +1; i <= 0; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}
int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int* a = new int[n];
    cout << "Enter the elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << "Reversed array:" << endl;
    reverseArray(a, n);
    delete[] a;
    return 0;
}
