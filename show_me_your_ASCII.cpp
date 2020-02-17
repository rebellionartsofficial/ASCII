#include <iostream>
#include <conio.h>

using namespace std;

void main()
{
    cout << "==============================================================" << endl;
    cout << "======================== TABELA ASCII ========================" << endl;
    cout << "==============================================================\n\n" << endl;
    for (int i = 32; i < 256; i += 6)
    {
        cout << " | " << (char)(i) << " == " << i << " | ";
        cout << (char)(i + 1) << " == " << i + 1 << " | ";
        cout << (char)(i + 2) << " == " << i + 2 << " | ";
        cout << (char)(i + 3) << " == " << i + 3 << " | ";
        cout << (char)(i + 4) << " == " << i + 4 << " | ";
        cout << (char)(i + 5) << " == " << i + 5 << " | ";
        cout << endl;
    }
    _getch();
}


