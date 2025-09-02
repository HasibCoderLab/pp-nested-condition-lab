// ================================================
//               Language: C++ / Cpp
//               Topic   : [Nested -Condition]
//               Problem : 👉👉 Greatest of num.
//               Want    : Take 3 positive integers input and print the Greatest of them
//
// ================================================
#include <iostream>
using namespace std;
int main()
{
    int x, y, z;
    cout << "Enter 1st Number ";
    cin >> x;
    cout << "Enter 2nd Number ";
    cin >> y;
    cout << "Enter 3rd Number ";
    cin >> z;
    if (x > y)
    {
        if (x > z)
        {
            cout << "Greatest number is " << x << endl;
        }
        else
        {
            cout << "Greatest number is " << z << endl;
        }
    }
    else
    {
        if (y > z)
        {
            cout << "Greatest number is " << y << endl;
        }
        else
        {
            cout << "Greatest number is " << z << endl;
        }
    }
    return 0;
}