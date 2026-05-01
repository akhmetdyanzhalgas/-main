#include <iostream>
#include <string>
using namespace std;
int main() {
    std::string str;
    std::cout << "please enter ";
    std::cin >> str;

    if (str.length() >= 2) {
        std::string result = str.substr(0, 2);
        std::cout << "natizhe " << result << std::endl;
    } else {
        std::cout << "tum kuska" << std::endl;
    }

    return 0;
}
