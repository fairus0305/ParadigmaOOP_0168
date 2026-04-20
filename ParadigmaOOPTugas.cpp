#include <iostream>
using namespace std;

class Barang
{
public:
    string nama;
    int jumlah;
    string kategori;
    string tanggalProduksi;

    void printData()
    {
        cout << "Nama Barang : " << nama << endl;
        cout << "Jumlah : " << jumlah << endl;
        cout << "Kategori : " << kategori << endl;
        cout << "Tanggal Produksi : " << tanggalProduksi << endl;
    }
};

int main()
{
    Barang Elek;
    Elek.nama = "Televisi";
    Elek.jumlah = 35;
    Elek.kategori = "Elektronik";
    Elek.tanggalProduksi = "2025-06-20";
    Elek.printData();
    cout << endl;

   
}