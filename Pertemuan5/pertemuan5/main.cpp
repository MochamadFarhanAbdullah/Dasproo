#include <iostream>

using namespace std;

int main()
{
    cout << "Luas Lingkaran" << endl;
    float phi,r,L;
    phi = 3.14;
    L = phi*r*r;

    cout << "Masukkan jari-jari lingkaran yang diinginkan= ";
    cin >> r;
    cout << "Luas lingkaran= " << phi*r*r;
    cout << endl;

    cout << "\nLuas Persegi Panjang" << endl;
    int p,l,Lp;
    Lp = p*l;

    cout << "Masukkan panjang persegi panjang yang diinginkan= ";
    cin >> p;
    cout << "Masukkan lebar persegi panjang yang diinginkan= ";
    cin >> l;
    cout << "Luas persegi panjang= " << p*l;

    return 0;
}
