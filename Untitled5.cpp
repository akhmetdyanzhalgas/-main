#include <iostream>
using namespace std;

int main() 
{
    float r,pi=3.14, S,L;
    cout <<  "радиусты енгиз =  ";
    cin >> r;

    L=2* (pi  * r);
    S = pi*r*r;

    cout << "S= " << S << ",L = " << L << endl;

    return 0;
}
