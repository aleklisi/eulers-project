#include <iostream>

using namespace std;

int main()
{
    int suma_kwadratow = 0;
    int kwadrat_sumy = 0;
    int wynik;
    for (int i = 1; i <= 100 ; i++)
    {
        suma_kwadratow += (i*i);
        kwadrat_sumy += i;
    }
    kwadrat_sumy *=kwadrat_sumy;
    wynik = suma_kwadratow - kwadrat_sumy;
    cout << "wynik to: " << wynik << endl;
    return 0;
}
