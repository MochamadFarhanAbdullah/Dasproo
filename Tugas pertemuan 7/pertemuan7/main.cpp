#include <iostream>

using namespace std;

int main()
{   cout << "Mochamad Farhan Abdullah, A11.2022.14145" << endl;
    cout << "\n   Daftar jurusan" << endl;
    cout << "1. Teknik Informatika" << endl;
    cout << "2. Sistem Informasi" << endl;
    cout << "3. Desain Komunikasi Visual" << endl;
    cout << "\n   Kategori Mahasiswa";
    cout << "\n1. Semester 1-2 = Freshman";
    cout << "\n2. Semester 3-4 = Sophomore";
    cout << "\n3. Semester 5-6 = Junior";
    cout << "\n4. Semester 7-8 = Senior" << endl;

    int a,b; //a utk daftar jurusan, b utk kategori mahasiswa.

    cout << "\nMasukkan jurusan Anda (isi dengan angka 1-3) = ";
    cin >> a;
    if (a == 1) {
        cout << "Jurusan Anda adalah Teknik Informatika" << endl;
    }
    if (a == 2) {
        cout << "Jurusan Anda adalah Sistem Informasi" << endl;
    }
    if (a == 3) {
        cout << "Jurusan Anda adalah Desain Komunikasi Visual" << endl;
    }

    cout << "\nMasukkan semester Anda (isi dengan angka 1-8) = ";
    cin >> b;
    if (b < 3) {
        cout << "Anda adalah Freshman" << endl;
    }
    if (b > 2 && b < 5) {
        cout << "Anda adalah Sophomore" << endl;
    }
    if (b > 4 && b < 7) {
        cout << "Anda adalah Junior" << endl;
    }
    if (b > 6 && b < 9) {
        cout << "Anda adalah Senior" << endl;
    }
    if (b > 8) {
        cout << "Anda adalah Suhu Kampus" << endl;
    }

    return 0;
}
