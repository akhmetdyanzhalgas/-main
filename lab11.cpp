#include <iostream>
using namespace std;

int main() {
    int n, W;
    cin >> n >> W;

    int w[100], v[100], dp[1001] = {0};

    for(int i = 0; i < n; i++) {
        cin >> w[i] >> v[i];
    }

    for(int i = 0; i < n; i++) {
        for(int j = W; j >= w[i]; j--) {
            if(dp[j] < dp[j - w[i]] + v[i]) {
                dp[j] = dp[j - w[i]] + v[i];
            }
        }
    }

    cout <<"жауабы: " <<dp[W];
}