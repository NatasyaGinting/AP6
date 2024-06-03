// buatlah program untuk menentukan sebuah bilangan ganjil atau genap

#include <iostream>
using namespace std;

int main()
{
    int bil;
    cout<< "masukkan bilangan: ";
    cin >> bil;

    // if else
     if (bil % 2 == 0) 
    {
        cout << "adalah bilangan genap" << endl;
    } 
    else 
    {
        cout << "adalah bilangan ganjil" << endl;
    }
}