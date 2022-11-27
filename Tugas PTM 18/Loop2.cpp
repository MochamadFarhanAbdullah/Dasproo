#include <iostream>
using namespace std;

int main()
{
    int i;
    int j = 0;
    for (i = 100; i > 0; i--){
        if (i % 2 == 1){
            continue;
        }
        cout << i << endl;
    }
    return 0;
}