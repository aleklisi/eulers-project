#include <iostream>

using namespace std;
void nast_Fib(int &poprz_mniejsza,int &poprz_wieksza)
{
    int pom = poprz_wieksza;
    poprz_wieksza += poprz_mniejsza;
    poprz_mniejsza = pom;
}
int main()
{
    int wynik = 0;
    int fib_mn = 1;
    int fib_wk = 2;
    while (fib_wk < 4 000 000)
    {
        if (fib_wk%2 == 0)
        {
            wynik += fib_wk;
        }
        cout << "sprawdzana liczba to: " << fib_wk << endl;
        nast_Fib(fib_mn,fib_wk);
    }
    cout << "wynik to:" << wynik << endl;
    return 0;
}
