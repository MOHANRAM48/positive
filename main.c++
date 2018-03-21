#include <iostream>
using namespace std;

int main()
{
    signed long a = 0;
     
   cin >> a;
    if(a > 0)
    {
        cout << " The entered number is positive.\n\n";
    }
    else if(a < 0)
    {
        cout << " The entered number is negative.\n\n";
    }
    else
    {
        cout << " The number is zero.\n\n";
    }
    return 0;
}
