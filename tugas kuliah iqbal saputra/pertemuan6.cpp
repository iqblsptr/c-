#include <iostream>
using namespace std;

int main()
{
    int uang, sisa;
    int seratusRibu = 0, limaPuluhRibu = 0, sepuluhRibu = 0, seribu = 0, seratus = 0;

    cout << "Masukan jumlah uang: ";
    cin >> uang;

    sisa = uang;

    while (sisa >= 100000)
    {
        seratusRibu++;
        sisa -= 100000;
    }

    while (sisa >= 50000)
    {
        limaPuluhRibu++;
        sisa -= 50000;
    }

    while (sisa >= 10000)
    {
        sepuluhRibu++;
        sisa -= 10000;
    }

    while (sisa >= 1000)
    {
        seribu++;
        sisa -= 1000;
    }

    while (sisa >= 100)
    {
        seratus++;
        sisa -= 100;
    }

    cout << seratusRibu << " x Rp 100000" << endl;
    cout << limaPuluhRibu << " x Rp 50000" << endl;
    cout << sepuluhRibu << " x Rp 10000" << endl;
    cout << seribu << " x Rp 1000" << endl;
    cout << seratus << " x Rp 100" << endl;

    return 0;
}