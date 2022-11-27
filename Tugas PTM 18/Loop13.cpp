#include <iostream>
using namespace std;

int main()
{
    float f;
    string k;
    int c = 100;
    cout << "Celcius            Fahrenheit            Keterangan" << endl;
    while (c != -41){
        c--;
        if (c == 100){
            f = (c * (9.0 / 5.0)) + 32.0;
            k = "Air mendidih";
            cout << c << "                  ";
            cout << f << "              " << k << endl;
            continue;
        }
        else if (c == 40){
            f = (c * (9.0 / 5.0)) + 32.0;
            k = "Air mandi panas";
            cout << c << "                     ";
            cout << f << "             " << k << endl;
            continue;
        }
        else if (c == 37){
            f = (c * (9.0 / 5.0)) + 32.0;
            k = "Temperatur tubuh";
            cout << c << "                     ";
            cout << f << "            " << k << endl;
            continue;
        }
        else if (c == 30){
            f = (c * (9.0 / 5.0)) + 32.0;
            k = "Cuaca pantai";
            cout << c << "                     ";
            cout << f << "              " << k << endl;
            continue;
        }
        else if (c == 21){
            f = (c * (9.0 / 5.0)) + 32.0;
            k = "Temperatur ruangan";
            cout << c << "                     ";
            cout << f << "            " << k << endl;
            continue;
        }
        else if (c == 10){
            f = (c * (9.0 / 5.0)) + 32.0;
            k = "Hari yang dingin";
            cout << c << "                     ";
            cout << f << "              " << k << endl;
            continue;
        }
        else if (c == 0){
            f = (c * (9.0 / 5.0)) + 32.0;
            k = "Titik beku air";
            cout << c << "                      ";
            cout << f << "              " << k << endl;
            continue;
        }
        else if (c == -18){
            f = (c * (9.0 / 5.0)) + 32.0;
            k = "Cuaca dingin bersalju";
            cout << c << "                   ";
            cout << f << "             " << k << endl;
            continue;
        }
        else if (c == -40){
            f = (c * (9.0 / 5.0)) + 32.0;
            k = "Cuaca sangat dingin bersalju";
            cout << c << "                   ";
            cout << f << "              " << k << endl;
            continue;
        }
    }

    return 0;
}