#include "KategoriProduk.h"
#include <iostream>
using namespace std;

KategoriProduk::KategoriProduk() : Produk() {}
KategoriProduk::KategoriProduk(string idProduk, string namaProduk, int harga, int stok,
                               string idKategori, string namaKategori)
    : Produk(idProduk, namaProduk, harga, stok)
{
    this->idKategori = idKategori;
    this->namaKategori = namaKategori;
}

string KategoriProduk::getIdKategori() { return idKategori; }
void KategoriProduk::setIdKategori(string id) { idKategori = id; }

string KategoriProduk::getNamaKategori() { return namaKategori; }
void KategoriProduk::setNamaKategori(string nama) { namaKategori = nama; }

void KategoriProduk::tampilkanInfo()
{
    Produk::tampilkanInfo();
    cout << "ID Kategori   : " << idKategori << endl;
    cout << "Nama Kategori : " << namaKategori << endl;
}
