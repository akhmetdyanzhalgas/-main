#include <iostream>
#include <string>   
using namespace std;
int main() {
	setlocale(LC_ALL,"RU");
    string str;
    cout << "жолды енгиз: ";    
    getline(cin, str);
    if (str.length() >= 2) 
    {
        cout << "2ши символ: " << str[1] << endl;
    } else 
    {
        cout << "жолдын узындыгы 2ден кем" << endl;
    }
    return 0;
}

