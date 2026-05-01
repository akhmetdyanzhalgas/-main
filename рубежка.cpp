#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum = sum + i * i;
    }
    
    cout << sum;
    
    return 0;
}




//#include <iostream>
//using namespace std;
// а дан  в га дейнги санды табу
//int main() {
//    int a, b;
//    cin >> a >> b;
//    
//    for (int i = a; i <= b; i++) {
//        cout << i;
//        if (i < b) {
//            cout << " ";
//        }
//    }
//    
//    return 0;
//}
//





//#include <iostream>
//using namespace std;
// санын болгиштерин табу
//int main() {
//    int n;
//    cin >> n;
//    
//   for (int i = 1; i <= n; i++) {
//       if (n % i == 0) {
//            cout << i << " ";
//        }
//    }
//    
//    return 0;
//}
