#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "(Masukkan 7)" << endl;
    cout << "Input = ";
    cin >> x;
    for(int i = 1; i <= 10; i++){
        for(int j = x; j <= 7; j++){ 
            cout << i << " x " << x << " = " << i*x << endl;
        }
    }
    return 0;
}