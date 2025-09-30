#include "Produk.h"
#include <iostream>
using namespace std;

Produk::Produk() {}
Produk::Produk(string idProduk, string namaProduk, int harga, int stok)
{
    this->idProduk = idProduk;
    this->namaProduk = namaProduk;
    this->harga = harga;
    this->stok = stok;
}

string Produk::getIdProduk() { return idProduk; }
void Produk::setIdProduk(string id) { idProduk = id; }

string Produk::getNamaProduk() { return namaProduk; }
void Produk::setNamaProduk(string n) { namaProduk = n; }

int Produk::getHarga() { return harga; }
void Produk::setHarga(int h) { harga = h; }

int Produk::getStok() { return stok; }
void Produk::setStok(int s) { stok = s; }

void Produk::tampilkanInfo()
{
    cout << "ID Produk : " << idProduk << endl;
    cout << "Nama      : " << namaProduk << endl;
    cout << "Harga     : " << harga << endl;
    cout << "Stok      : " << stok << endl;
}

Produk::~Produk() {}
