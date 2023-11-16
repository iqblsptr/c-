#include <iostream>
using namespace std;

int main()
{

    string tujuan;
    string tanggal;
    int jumlah_tiket;
    int harga_tiket;
    int total_harga;

    const int BDG_SBY = 500000;
    const int BDG_JKT = 300000;
    const int BDG_YK = 400000;

    cout << "Tujuan: ";
    cout << "\n1. Bandung - Surabaya\n";
    cout << "2. Bandung - Jakarta\n";
    cout << "3. Bandung - Yogyakarta\n";
    cout << "Pilih tujuan: ";
    cin >> tujuan;

    cout << "Tanggal keberangkatan (dd/mm/yyyy): ";
    cin >> tanggal;

    cout << "Jumlah tiket: ";
    cin >> jumlah_tiket;

    if (tujuan == "1")
    {
        harga_tiket = BDG_SBY;
    }
    else if (tujuan == "2")
    {
        harga_tiket = BDG_JKT;
    }
    else if (tujuan == "3")
    {
        harga_tiket = BDG_YK;
    }

    total_harga = harga_tiket * jumlah_tiket;

    cout << "\nPemesanan Tiket Kereta Api\n";
    cout << "Tujuan: " << tujuan << "\n";
    cout << "Tanggal Keberangkatan: " << tanggal << "\n";
    cout << "Jumlah Tiket: " << jumlah_tiket << "\n";
    cout << "Total Harga: Rp " << total_harga << "\n";

    return 0;
}
