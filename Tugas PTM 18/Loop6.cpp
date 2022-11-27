#include <iostream>
using namespace std;

int main()
{
    int i, min, max;
    for (int j = 0; j <= 2; i++){ 
        for (int k = 0; k < 2; j++){
            cin >> i;
            if (j == 0){
                min = i;
                max = i;
            }
            else if (min > i){
                min = i;
            }
            else if (max < i)
                max = i;
        
            if (i == -99){
                break;
        }
        }
    }
    cout << "Program selesai karena break" << endl;
    cout << "Nilai terkecil           : " << min << endl;
    cout << "Nilai terbesar           : " << max << endl;
    return 0;
}