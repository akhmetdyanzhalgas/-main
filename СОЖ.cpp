#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	cout<<" Akhmetdyan Zhalgas"<<endl;
    int sandar_sany;
    cout << "Тизбектеги сандар санын енгизиниз";
    cin >> sandar_sany;
    int on_sandar_sany = 0;
    int teris_sandar_sany = 0;
    int nol_sany = 0;
    int on_sandar_kosyndysy = 0;
    int teris_sandar_kosyndysy = 0;
    int en_ulken_san = -1000000;
    int en_kishi_san = 1000000;
    for (int i = 0; i < sandar_sany; i++) {
        int san;
        cout << i + 1 << "-ши сан: ";
        cin >> san;
        if (san > 0) {
            on_sandar_sany++;
            on_sandar_kosyndysy += san;
        } else if (san < 0) {
            teris_sandar_sany++;
            teris_sandar_kosyndysy += san;
        } else {
            nol_sany++;
        }
        if (san > en_ulken_san) {
            en_ulken_san = san;
        }
        if (san < en_kishi_san) {
            en_kishi_san = san;
        }
    }
    int aiyrma = en_ulken_san - en_kishi_san;
    cout << "он сандар саны- " << on_sandar_sany << endl;
    cout << "терис сандар саны- " << teris_sandar_sany << endl;
    cout << "нолдер саны-" << nol_sany << endl;
    cout << "он сандар суммасы- " << on_sandar_kosyndysy << endl;
    cout << "терис сандар сумммасы- " << teris_sandar_kosyndysy << endl;
    cout << "ен улкен сан мен ен киши санына айырмашылыгы " << aiyrma << endl;
    
    return 0;
}
