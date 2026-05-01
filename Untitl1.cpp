#include <iostream>
using namespace std;

bool see(int san) {
    return san < 0;
}

int main() {
    int san;
    cout << " please enter";
    cin >> san;

    if (see(san)) {
        cout << "san teris" << endl;
    } else {
        cout << "on san nemese nol san" << endl;
    }

    return 0;
}

