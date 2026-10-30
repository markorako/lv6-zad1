

#include <iostream>
using namespace std;

int main()
{
    int dob = 1;
    cin>> dob;
    bool imaLiPozivnicu = 0;
    cin>> imaLiPozivnicu;
    if (dob >= 16 && imaLiPozivnicu == 1)
    {
        cout << "Mozete uci.";

    }
    else
    {
        cout << "Ne mozete uci.";
    };
    return 0;
}

