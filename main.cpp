#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    //double wynik;
    for (int a = 500; a > 0; a--)
    {
        for (int b = a; b > 0; b--)
        {
            if (a+b+sqrt((a*a)+(b*b)) == 1000)
            {
                cout << "a: " << a << "b: " << b << endl;
            }
        }
    }
    cout << "Hello world!" << endl;
    return 0;
}
