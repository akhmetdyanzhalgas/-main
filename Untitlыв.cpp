#include <iostream>
using namespace std;

int main() {
    char s[300];
    cin.getline(s, 300);

    int cnt[256] = {0};

    for (int i = 0; s[i] != '\0'; i++) {
        unsigned char c = s[i];
        cnt[c]++;
    }

    int maxCount = 0;
    char maxChar = ' ';

    for (int i = 0; i < 256; i++) {
        if (cnt[i] > maxCount) {
            maxCount = cnt[i];
            maxChar = (char)i;
        }
    }

    cout << "En jii simbol: " << maxChar;
    return 0;
}

