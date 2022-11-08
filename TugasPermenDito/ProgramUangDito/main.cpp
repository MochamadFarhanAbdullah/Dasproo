#include <iostream>

using namespace std;

int main()
{
    /* Cara 1
    int x = 5000; //Uang Dito
    int y; //Harga permen

    cout << "Uang Dito = " << x << endl;
    cout << "Harga permen = ";
    cin >> y;

    if (y == 500){
        cout << "Dito membeli 5" << endl;
    } else if (y == 1000){
        cout << "Dito membeli " << x/y << endl;
    } else if (y == 300){
        for (int i = y; i <= x; i+=y){
            cout << i << endl;
        } cout << "Dito membeli " << x/y << endl;
    }
    */

    /* Cara 2
    int x = 5000; //Uang Dito
    int y; //Harga permen

    cout << "Uang Dito = " << x << endl;
    cout << "Harga permen = ";
    cin >> y;

    if (y == 500 || y == 1000){
        cout << "Dito membeli " << x/1000 << endl;
    } else if (y == 300){
        for (int i = y; i <= x; i+=y){
            cout << i << endl;
        } cout << "Dito membeli " << x/y << endl;
    }
    */

    /* Cara 3
    int x = 5000; //Uang Dito
    int y; //Harga permen

    cout << "Uang Dito = " << x << endl;
    cout << "Harga permen = ";
    cin >> y;

    if (y == 500 || y == 1000){
        cout << "Dito membeli " << x/1000 << endl;
    } else if (y == 300){
        for (int i = y; i <= x; i++){
                if(i % 300 == 0){
                    cout << i << endl;
                }
        } cout << "Dito membeli " << x/y << endl;
    }
    */

    return 0;
}
