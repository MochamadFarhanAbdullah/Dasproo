#include <iostream>

using namespace std;

int main()
{
    int array[3][2][2];
    int y = 2;
    int kel = 0;
    float sum = 0;
    float avg;
    cout << "Nilai array adalah ";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                array[i][j][k] = y;
                y += 2;
                cout << array[i][j][k] << " ";
                if (array[i][j][k] % 4 == 0)
                {
                    sum += array[i][j][k];
                    kel++;
                }
            }
        }
    }
    avg = sum/kel;
    cout << endl;
    cout << "Banyaknya bilangan kelipatan 4 adalah " << kel << endl;
    cout << "Jumlah bilangan kelipatan 4 adalah " << sum << endl;
    cout << "Rata-rata bilangan kelipatan 4 adalah " << avg << endl;

    // avg bil kel 4
    return 0;
}
