#include <iostream>

using namespace std;

bool czy_pal(int mozl)
{
    int jedn = mozl%10;
    int dzies = ((mozl%100) - (mozl%10))/10;
    int setki = ((mozl%1000) - (mozl%100))/100;
    int tys = ((mozl%10000) - (mozl%1000))/1000;
    int dztys = ((mozl%100000) - (mozl%10000))/10000;
    int settys = ((mozl%1000000) - (mozl%100000))/100000;
    //cout << jedn << "," << dzies << "," << setki << "," << tys << "," << dztys << "," << settys <<endl;
    if (mozl >= 100000)
    {
        return ((jedn == settys)&&(dzies == dztys)&&(setki == tys));
    }
    else
    {
        return ((jedn == dztys)&&(dzies == tys));
    }

}
int main()
{
    int mozl_pal;
    for (int licz_nm = 1000; licz_nm > 100; licz_nm--)
    {
        for (int licz_wk = 1000; licz_wk > 100; licz_wk--)
        {
            mozl_pal = licz_nm*licz_wk;
            //cout << "licz_nm: " << licz_nm << "licz_wk: " << licz_wk <<endl;
            //cout << "mozl_pal: " << mozl_pal << "czy_pal(mozliwy_pal): " << czy_pal(mozl_pal) << endl;
            if (czy_pal(mozl_pal))
            {
                cout << "wynik to: " << mozl_pal << endl;
            }
        }
    }
    return 0;
}
