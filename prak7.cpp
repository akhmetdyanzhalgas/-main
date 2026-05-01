#include <iostream>
using namespace std;

int main() {
    int a[] = {3, 2, 1, 5, 6, 4};
    int n = 6;
    int k = 2; //Бізге 2-ші ең үлкен сан керек

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] < a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    cout << k << "-ylken element: " << a[k - 1];

    return 0;
}