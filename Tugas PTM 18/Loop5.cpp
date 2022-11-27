#include <iostream>
using namespace std;

int main()
{
    int i;
    for (int j = 0; j <= 0; i++){ 
        cin >> i;
        if (i == -99){
            break;
        }
    }
    cout << "Program selesai karena break" << endl;
    return 0;
}