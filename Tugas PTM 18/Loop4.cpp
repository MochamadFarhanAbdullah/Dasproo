#include <iostream>
using namespace std;

int main()
{
    int i;
    float jumlah = 0;
    float rata_rata;

    for (i = 1; i <= 20; i++){
        cout << i << endl;
        jumlah = jumlah + i;
    }
    cout << endl;
    cout << "Jumlah = " << jumlah << endl;
    rata_rata = jumlah/20;
    cout << "Rata-rata = " << rata_rata << endl;
    return 0;
}