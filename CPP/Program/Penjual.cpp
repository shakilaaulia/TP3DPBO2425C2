#include "Penjual.h"
#include <iostream>
using namespace std;

Penjual::Penjual() : User() {}
Penjual::Penjual(string idUser, string nama, string email, string password, string noHp,
                 string idPenjual, string namaToko, string alamatToko)
    : User(idUser, nama, email, password, noHp)
{
    this->idPenjual = idPenjual;
    this->namaToko = namaToko;
    this->alamatToko = alamatToko;
}

string Penjual::getIdPenjual() { return idPenjual; }
void Penjual::setIdPenjual(string id) { idPenjual = id; }

string Penjual::getNamaToko() { return namaToko; }
void Penjual::setNamaToko(string nama) { namaToko = nama; }

string Penjual::getAlamatToko() { return alamatToko; }
void Penjual::setAlamatToko(string alamat) { alamatToko = alamat; }

void Penjual::tambahProduk(Produk *p) { daftarProduk.push_back(p); }

void Penjual::tampilkanInfo()
{
    cout << "\n=== PENJUAL ===" << endl;
    User::tampilkanInfo();
    cout << "ID Penjual : " << idPenjual << endl;
    cout << "Nama Toko  : " << namaToko << endl;
    cout << "Alamat Toko: " << alamatToko << endl;
    cout << "Produk Dijual:" << endl;
    for (auto p : daftarProduk)
    {
        p->tampilkanInfo();
    }
}
