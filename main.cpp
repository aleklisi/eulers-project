#include <iostream>

using namespace std;

int main()
{
    int wynik = 0;
    for (int i = 1; i < 10;i++ )
    {
        if ((i%3 == 0) || (i%5 == 0))
            wynik+=i;
    }
    cout << "Wynik to:" << wynik << endl;
    return 0;
}
