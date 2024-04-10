#include <iostream>
using namespace std;

int main()
{
    int nilai;

    cout<< "Masukkan nilai: ";
    cin >> nilai;

    // if statement
    if (nilai < 65) 
    {
        cout << "tidak lulus" << endl;
    } 
    
    // if else statement
    if (nilai < 65) 
    {
        cout << "tidak lulus" << endl;
    } 
    else 
    {
        cout << "lulus" << endl;
    }

    // if else if statement
    < 65 -> tidak lulus
    > 65 -> lulus
    == 65 -> lulus dengan nilai pas

    if (nilai < 65) 
    {
        cout << "tidak lulus" << endl;
    } 
    else if (nilai > 65) 
    {
        cout << "lulus" << endl;
    } 
    else if (nilai == 65) 
    {
        cout << "lulus dengan nilai pas" << endl;
    }

    // nested if
    < 0 -> tidak valid
    > 100 -> tidak valid

    if (nilai < 0 || nilai > 100) 
    {
        cout << "tidak valid" << endl;
    } else {
        if (nilai < 65) 
    {
        cout << "tidak lulus" << endl;
    }
    else if (nilai > 65)
     {
        cout << "lulus" << endl;
     }
     else if (nilai == 65)
     {
        cout << "lulus dengan nilai pas" << endl;
    }
    }
    

    // switch case
    1 -> Senin
    2 -> Selasa
    ...
    7 -> Minggu

    switch (nilai) 
    {
        case 1:
        cout << "Senin" << endl;
        break;
        case 2:
        cout << "Selasa" << endl;
        break;
        case 3:
        cout << "Rabu" << endl;
        break;
        case 4:
        cout << "Kamis" << endl;
        break;
        case 5:
        cout << "Jumat" << endl;
        break;
        case 6:
        cout << "Sabtu" << endl;
        break;
        case 7:
        cout << "Minggu" << endl;
        break;
        default:
        cout << "tidak valid" << endl;
        break; // optional
    }

    // switch case for range
    A -> 90 ... 100
    B+ -> 85 ... 89
    B -> 80 ... 84
    C+ -> 75 ... 79
    C -> 70 ... 74
    D -> 65 ... 69
    E -> 0 ... 64

    switch (nilai) 
    {
        case 90 ... 100:
        cout << "A" << endl;
        break;
        case 85 ... 89:
        cout << "B+" << endl;
        break;
        case 80 ... 84:
        cout << "B" << endl;
        break;
        case 75 ... 79:
        cout << "C+" << endl;
        break;
        case 70 ... 74:
        cout << "C" << endl;
        break;
        case 65 ... 69:
        cout << "D" << endl;
        break;
        case 0 ... 64:
        cout << "E" << endl;
        break;
    }


    // ternary operator (short hand if-else)
    // kondisi ? "true" : "false"
    // (34 > 54) ? "true" : "false"
    //false

    // if (nilai < 0) {
    //    cout << "negatif" << endl;
    // } else {
    //    cout << "positif" << endl;
    // }

    string tipe = (nilai > 0) ? "positif" : "negatif";
    cout << tipe << endl;
}