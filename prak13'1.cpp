#include <iostream>// 6. Insert Delete GetRandom O(1) (LeetCode #380)
#include <vector>
using namespace std;
class RandomSet {
public:
    vector<int> a;     // элементтер сақталады
    int pos[1000];     // әр элементтің индексі
    RandomSet() {
        for (int i = 0; i < 1000; i++) pos[i] = -1; // басында бос
    }
    bool insert(int x) {
        if (pos[x] != -1) return false; // бар болса қоспаймыз
        a.push_back(x);                 // соңына қосамыз
        pos[x] = a.size() - 1;          // индексін сақтаймыз
        return true;
    }
    bool remove(int x) {
        if (pos[x] == -1) return false; // жоқ болса өшірмейміз
        int i = pos[x];                 // өшетін элемент индексі
        int last = a.back();            // соңғы элемент
        a[i] = last;                    // swap (орнына соңғысын қоямыз)
        pos[last] = i;                  // индексін жаңартамыз
        a.pop_back();                   // соңғысын өшіреміз
        pos[x] = -1;                   // x енді жоқ
        return true;
    }
    int getRandom() {
        return a[rand() % a.size()];   // кездейсоқ элемент
    }
};
int main() {
    RandomSet s;
    s.insert(10);  // қосу
    s.insert(20);  // қосу
    s.remove(10);  // өшіру
    cout <<"жауабы: " << s.getRandom(); // random шығару
}