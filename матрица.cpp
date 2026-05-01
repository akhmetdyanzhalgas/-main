#include <iostream>
using namespace std;

int main() {
    int n, arr[1000];
    cin >> n;
    
    for (int i = 0; i < n; i++) {  // i < n болуы керек
        cin >> arr[i];
    }
    
    for (int i = n - 1; i >= 0; i--) {
        cout << arr[i] << " ";  // endl орнына бос орын ?ою керек
    }
    
    return 0;
}
