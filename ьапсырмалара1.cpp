#include <iostream>
using namespace std;

int main() {
    int previous, current;
    bool foundDuplicate = false;
    
    cout << "1-san engiz ";
    cin >> previous;
    
    while (!foundDuplicate) {
        cout << "kelesi san ";
        cin >> current;
        
        if (current == previous) {
            foundDuplicate = true;
            cout << "kaitalau tabldy-break" << endl;
        } else {
            previous = current;
        }
    }
    
    return 0;
}
