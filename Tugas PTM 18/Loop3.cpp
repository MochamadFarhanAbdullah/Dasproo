#include <iostream>
using namespace std;

int main()
{
    int i;
    int j = 0;
    for (i = 100; i >= 1; i--){
        if (i == 54){
            break;
        }
        cout << i << endl;
    }
    return 0;
}