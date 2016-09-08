#include <iostream>

using namespace std;
long long int funkcja_collatza(long long int liczba)
{
    if (liczba%2 == 0)
    {
        return liczba/2;
    }
    else
    {
        return 3*liczba+1;
    }
}
long long int dlugosc_lancucha(int liczba)
{
    long long int chwilowa_liczba = liczba;
    int dlugosc_lancucha = 1;
    while (chwilowa_liczba != 1)
    {
        chwilowa_liczba = funkcja_collatza(chwilowa_liczba);
        dlugosc_lancucha++;
        if (dlugosc_lancucha > 10000000)
        {
            cout << liczba << endl;
            return 10000000;
        }
    }
    //cout << dlugosc_lancucha << endl;
    return dlugosc_lancucha;
}
int main()
{
    int max_dlugosc_lancucha = 0;
    long long int liczba_z_najdluzszy_lancuch = 1;
    for (int i = 1; i < 1000000; i++)
    {
        //cout << i << "  " ;
        if (dlugosc_lancucha(i) > max_dlugosc_lancucha)
        {
            max_dlugosc_lancucha = dlugosc_lancucha(i);
            liczba_z_najdluzszy_lancuch = i;
        }
    }
    cout << "max dlugos lancucha to: " << max_dlugosc_lancucha << endl;
    cout << " osiagana dla liczby: " << liczba_z_najdluzszy_lancuch << endl;
    return 0;
}
