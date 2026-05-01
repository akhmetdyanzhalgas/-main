
#include <iostream>
#include <string>
using namespace std;

string see(string s){
    string r = "";
    for(int i = 0; i < s.size(); i++){
        if(s[i] != ' ') r += s[i];
    }
    return r;
}

int main(){
    string s;
    getline(cin, s);
    cout << see(s);
}

