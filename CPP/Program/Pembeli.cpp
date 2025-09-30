#include "Pembeli.h"
#include <iostream>
using namespace std;

Pembeli::Pembeli() : User() {}
Pembeli::Pembeli(string idUser, string nama, string email, string password, string noHp,
                 string idPembeli, string alamat)
    : User(idUser, nama, email, password, noHp)
{
    this->idPembeli = idPembeli;
    this->alamatPengiriman = alamat;
}

string Pembeli::getIdPembeli() { return idPembeli; }
void Pembeli::setIdPembeli(string id) { idPembeli = id; }

string Pembeli::getAlamatPengiriman() { return alamatPengiriman; }
void Pembeli::setAlamatPengiriman(string alamat) { alamatPengiriman = alamat; }

void Pembeli::tambahKeKeranjang(Produk *p) { keranjang.push_back(p); }

void Pembeli::tampilkanInfo()
{
    cout << "\n=== PEMBELI ===" << endl;
    User::tampilkanInfo();
    cout << "ID Pembeli        : " << idPembeli << endl;
    cout << "Alamat Pengiriman : " << alamatPengiriman << endl;
    cout << "Keranjang:" << endl;
    for (auto p : keranjang)
    {
        p->tampilkanInfo();
    }
}
