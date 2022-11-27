#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 7; i++){
        cout << "Loop " << i << endl;
        for(int j = 1; j <= 10; j++){
            cout << j << endl;
        }
        cout << endl;
    }
    return 0;
}