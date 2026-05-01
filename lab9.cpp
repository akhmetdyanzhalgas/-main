# include <iostream>
#include <string>
using namespace std;
int main() {
	
//	 8 тапсырма
//    char s[200];
//    cin.getline(s, 200);
//
//    int freq[256] = {0};
//
//    for (int i = 0; s[i]; i++)
//        freq[(unsigned char)s[i]]++;
//
//    int minf = 9999;
//    char ans;
//
//    for (int i = 0; i < 256; i++) {
//        if (freq[i] > 0 && freq[i] < minf) {
//            minf = freq[i];
//            ans = (char)i;
//        }
//    }
//
//    cout << ans;
  

	
	
//6 тапсырма
//    char s[200];
//    cin.getline(s, 200);
//
//    char result[200];
//    int k = 0;
//
//    for (int i = 0; s[i]; i++) {
//        if (i % 2 == 0)
//            result[k++] = s[i];
//    }
//
//    result[k] = '\0';
//    cout << result;
 

	
	
//	5тапсырма

//    char s[100];
//    cin.getline(s, 100);
//
//    int n = strlen(s);
//    bool pal = true;
//
//    for (int i = 0; i < n / 2; i++) {
//        if (s[i] != s[n - i - 1]) {
//            pal = false;
//            break;
//        }
//    }
//
//    if (pal) cout << "YES";
//    else cout << "NO";



	
//	4 тапсырма
//	    char s[200];
//    cin.getline(s, 200);
//
//    char result[200];
//    int k = 0;
//
//    for (int i = 0; s[i]; i++) {
//        bool bar = false;
//        for (int j = 0; j < k; j++) {
//            if (result[j] == s[i]) {
//                bar = true;
//                break;
//            }
//        }
//        if (!bar) result[k++] = s[i];
//    }
//
//    result[k] = '\0';
//    cout << result;
// 	3 тапсырма
	
    char s[100];
    cin.getline(s, 100);

    int count = 1;
    for (int i = 0; s[i]; i++) {
        if (s[i] == ' ')
            count++;
    }
   
	
	
// 2тапсырма
//	setlocale(LC_ALL,"RU");
//	 char s[100];
//    cin.getline(s, 100);
//    int n = strlen(s);
//    for (int i = n - 1; i >= 0; i--) {
//        cout << s[i];
//    }
//	
// 1 тапсырма
//пайдаланушы енгизген создин узындыгын табады 
//	 string str;
//	 getline (cin,str);
//	 cout << "sen engizdin:"<<str<< endl;
//	 cout << str[str.size()]<<endl;
//	 cout << str.size() << endl;



	return 0;
}
