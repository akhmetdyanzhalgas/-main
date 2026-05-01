#include <bits/stdc++.h>
using namespace std;

void sortSum() {
    cout << "Kosyndyny engiziniz (mysaly: 3+2+1): ";
    string s;
    cin >> s;

    vector<char> numbers;
    for(char c :s ) {
        if(c != '+') numbers.push_back(c);
    }

    sort(numbers.begin(), numbers.end());

    cout << "Rettelgen kosyndy: ";
    for(size_t i = 0; i < numbers.size(); i++) {
        cout << numbers[i];
        if(i != numbers.size()-1) cout << '+';
    }
    cout << endl;
}

void power() {
    double b;
    int e;
    cout << "Negiz sandy engiziniz: ";
    cin >> b;
    cout << "Dareje sandyn engiziniz: ";
    cin >> e;

    double result = pow(b, e);
    cout << "Natyzhe: " << fixed << setprecision(5) << result << endl;
}

int main() {
    cout << "Sheshiletin esepti tandanyz (1-2):\n";
    cout << "1 - Ksenianyn kosyndysyn retteu\n";
    cout << "2 - b^e esepteu\n";

    int choice;
    cin >> choice;

    switch(choice) {
        case 1: sortSum(); break;
        case 2: power(); break;
        default: cout << "Qate tanday!" << endl;
    }

    return 0;
}

