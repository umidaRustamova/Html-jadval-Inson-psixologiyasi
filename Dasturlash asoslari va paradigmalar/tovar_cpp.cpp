#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Tovar sinfi
class Tovar {
public:
    string nomi;
    int narxi;
    int miqdori;

    Tovar(string nomi, int narxi, int miqdori) {
        this->nomi = nomi;
        this->narxi = narxi;
        this->miqdori = miqdori;
    }
};

// Tovarlar ro'yxatini chiqarish funksiyasi
void tovarlarni_chiqar(vector<Tovar>& tovarlar) {
    for (auto& tovar : tovarlar) {
        cout << "Nomi: " << tovar.nomi << endl;
        cout << "Narxi: " << tovar.narxi << endl;
        cout << "Miqdori: " << tovar.miqdori << endl;
        cout << "-----------------" << endl;
    }
}

// Tovar qidirish funksiyasi
void tovar_qidir(vector<Tovar>& tovarlar, string nomi) {
    bool topildi = false;
    for (auto& tovar : tovarlar) {
        if (tovar.nomi == nomi) {
            topildi = true;
            cout << "Tovar mavjud!" << endl;
            cout << "Narxi: " << tovar.narxi << endl;
            cout << "Miqdori: " << tovar.miqdori << endl;
            break;
        }
    }
    if (!topildi) {
        cout << "Bunday tovar mavjud emas!" << endl;
    }
}

int main() {
    vector<Tovar> tovarlar;
    int tovar_miqdori;
    cout << "Tovar miqdorini kiriting: ";
    cin >> tovar_miqdori;

    for (int i = 0; i < tovar_miqdori; ++i) {
        string nomi;
        int narxi, miqdori;
        cout << i + 1 << "-tovar" << endl;
        cout << "Nomi: ";
        cin >> nomi;
        cout << "Narxi: ";
        cin >> narxi;
        cout << "Miqdori: ";
        cin >> miqdori;
        cout << "-----------------" << endl;
        tovarlar.push_back(Tovar(nomi, narxi, miqdori));
    }

    cout << "Barcha tovarlar:" << endl;
    cout << "-----------------" << endl;
    tovarlarni_chiqar(tovarlar);

    string qidirish_nomi;
    cout << "Tovar nomi bilan qidiring: ";
    cin >> qidirish_nomi;
    tovar_qidir(tovarlar, qidirish_nomi);

    return 0;
}
