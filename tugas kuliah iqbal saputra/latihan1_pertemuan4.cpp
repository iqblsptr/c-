#include <iostream>
using namespace std;

int main()
{

    int gol, jamKerja, honor, lembur;
    int upahGolA, upahLemburA, upahGolB, upahLemburB, upahGolC, upahLemburC;

    upahGolA = 5000;
    upahLemburA = 3000;

    upahGolB = 7000;
    upahLemburB = 5000;

    upahGolC = 10000;
    upahLemburC = 7000;

    cout << "Masukkan golongan (A/B/C): ";
    cin >> gol;

    cout << "Jam kerja: ";
    cin >> jamKerja;

    if (gol == 'A')
    {
        if (jamKerja <= 48)
        {
            honor = jamKerja * upahGolA;
        }
        else
        {
            lembur = jamKerja - 48;
            honor = 48 * upahGolA;
            honor = honor + (lembur * upahLemburA);
        }
    }
    else if (gol == 'B')
    {
        if (jamKerja <= 48)
        {
            honor = jamKerja * upahGolB;
        }
        else
        {
            lembur = jamKerja - 48;
            honor = 48 * upahGolB;
            honor = honor + (lembur * upahLemburB);
        }
    }
    else if (gol == 'C')
    {
        if (jamKerja <= 48)
        {
            honor = jamKerja * upahGolC;
        }
        else
        {
            lembur = jamKerja - 48;
            honor = 48 * upahGolC;
            honor = honor + (lembur * upahLemburC);
        }
    }

    cout << "Honor yang diterima: Rp " << honor << endl;

    return 0;
}