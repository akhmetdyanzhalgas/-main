#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int main() {
    vector<int> nums = {7, 10, 4, 3, 20, 15};
    int k = 3; // 3-ші ең кіші элемент
    // Max-heap
    priority_queue<int> pq;
    for (int x : nums) {
        pq.push(x);
        if (pq.size() > k) {
            pq.pop(); // ең үлкенін өшіреміз
        }
    }
    cout << pq.top(); // k-шы ең кіші элемент
    return 0;
}