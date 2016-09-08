#include <iostream>

using namespace std;
void zerowanie_tablicy(bool *tablica, int rozmiar_tab)
{
    for (int i = 0; i < rozmiar_tab; i++)
    {
        tablica[i] = 0;
    }
}
void skreslanie_dalszych(bool *tablica,int rozmiar_tab, int liczba)
{
    for (int i = 2*liczba; i < rozmiar_tab; i +=liczba)
    {
        //cout << "liczba: " << liczba << ", tablica[i]: " << tablica[i] << endl;
        tablica[i] = 1;
    }
}
int main()
{
    int size_of_tab = 2000000;
    bool tab_N[size_of_tab];
    int wynik = 0;
    zerowanie_tablicy(tab_N,size_of_tab);
    cout << "zerowanie zakonczono" <<endl;
    for (int j = 2; j < size_of_tab/2; j++)
    {
        skreslanie_dalszych(tab_N,size_of_tab,j);
    }
    cout << "skreslanie dalszych zakonczono" <<endl;
    int numer_liczby_pierwszej = 10001;
    int licznik_liczb = numer_liczby_pierwszej;
    for(int i = 2; i < size_of_tab; i++)
    {
        if (tab_N[i] == 0)
        {
            licznik_liczb--;
            if (licznik_liczb == 0)
            {
                cout << numer_liczby_pierwszej << " liczba pierwsza to: " << i << endl;
            }
           // cout << i << endl;
            //wynik += i;
        }
    }
    //cout << "wynik to: " << wynik << endl;
    return 0;
}
