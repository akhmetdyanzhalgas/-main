#include <iostream>
using namespace std;

double see(double a, int n){
    double r = 1;
    for(int i = 0; i < n; i++){
        r *= a;
    }
    return r;
}

int main(){
    double a;
    int n;
    cin >> a >> n;

    cout.setf(ios::fixed);
    cout.precision(9);

    cout << see(a, n);
}

