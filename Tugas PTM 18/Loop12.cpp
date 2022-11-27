#include <iostream>
using namespace std;

int main()
{
    float j = 0.0;
    cout << "Celcius"
         << "             "
         << "Fahrenheit" << endl;
    for (int i = 0; i <= 100; i++)
    {
        j = (i * (9.0 / 5.0)) + 32;
        cout << i << "                    " << j << endl;
    }
    return 0;
}