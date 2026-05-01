#include <iostream>
using namespace std;
int main() {
    int nums[] = {2, 3, 1, 1, 4};
    int n = 5;
    int enalis = 0;

    for (int i = 0; i < n; i++) {
        if (i > enalis) {
            cout << "false";
            return 0;
        }
        if (enalis < i + nums[i]) {
            enalis = i + nums[i];
        }
    }

    cout << "true";
    return 0;
}