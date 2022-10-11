#include <iostream>

using namespace std;

int main()
{
    cout << "Membuat deret bilangan fibonnaci < 100" << endl;
    cout << endl;
    //Rumus bilangan fibbonaci <=> Fn = F(n-1) + F(n-2).
    //Deret pertama = 0 (Fnmin2), kedua = 1 (Fnmin1), ketiga = 1

    int Fn;
    int Fnmin1 = 1;
    int Fnmin2 = 0;
    for (int i = 1; i <= 12; i++) { //i < 12, 12 >> berapa angka yg mau ditampilkan
        if (i == 1) {
            cout << Fnmin2 << endl;
        } else if (i == 2) {
            cout << Fnmin1 << endl;
        } else {
            Fn = Fnmin1 + Fnmin2;
            Fnmin2 = Fnmin1;
            Fnmin1 = Fn;
            cout << Fn << endl;
        }
    }

    return 0;
}
