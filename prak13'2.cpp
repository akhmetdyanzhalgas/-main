#include <iostream>//6. Insert Delete GetRandom O(1) (LeetCode #380)
#include <vector>
using namespace std;
class RandomSet {
public:
    vector<int> arr;     // элементтер сақталады
    int pos[10000];      // элементтің индексі (қарапайым массив)
    RandomSet() {
        for (int i = 0; i < 10000; i++) pos[i] = -1; // бастапқыда бос
    }
    // элемент қосу
    bool insert(int val) {
        if (pos[val] != -1) return false; // бар болса қосылмайды
        arr.push_back(val);               // соңына қосамыз
        pos[val] = arr.size() - 1;        // индексін сақтаймыз
        return true;
    }
    // элемент өшіру
    bool remove(int val) {
        if (pos[val] == -1) return false; // жоқ болса
        int index = pos[val];             // өшетін элемент индексі
        int last = arr.back();            // соңғы элемент
        arr[index] = last;                // swap (орнына соңғысын қоямыз)
        pos[last] = index;                // оның индексін жаңартамыз
        arr.pop_back();                   // соңғысын өшіреміз
        pos[val] = -1;                   // val енді жоқ
        return true;
    }
    // кездейсоқ элемент алу
    int getRandom() {
        int r = rand() % arr.size();     // random индекс
        return arr[r];                   // сол элемент
    }
};
int main() {
    RandomSet obj;
    obj.insert(10);
    obj.insert(20);
    obj.insert(30);
    obj.remove(20);
    cout << "жауабы: " << obj.getRandom(); // кездейсоқ 10 немесе 30
    return 0;
}