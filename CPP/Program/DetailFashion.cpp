#include "DetailFashion.h"
#include <iostream>
using namespace std;

DetailFashion::DetailFashion() : KategoriProduk() {}
DetailFashion::DetailFashion(string idProduk, string namaProduk, int harga, int stok,
                             string idKategori, string namaKategori,
                             string idFashion, string ukuran, string warna, string bahan)
    : KategoriProduk(idProduk, namaProduk, harga, stok, idKategori, namaKategori)
{
    this->idFashion = idFashion;
    this->ukuran = ukuran;
    this->warna = warna;
    this->bahan = bahan;
}

string DetailFashion::getIdFashion() { return idFashion; }
void DetailFashion::setIdFashion(string id) { idFashion = id; }

string DetailFashion::getUkuran() { return ukuran; }
void DetailFashion::setUkuran(string u) { ukuran = u; }

string DetailFashion::getWarna() { return warna; }
void DetailFashion::setWarna(string w) { warna = w; }

string DetailFashion::getBahan() { return bahan; }
void DetailFashion::setBahan(string b) { bahan = b; }

void DetailFashion::tampilkanInfo()
{
    cout << "\n[Fashion]" << endl;
    KategoriProduk::tampilkanInfo();
    cout << "ID Fashion : " << idFashion << endl;
    cout << "Ukuran     : " << ukuran << endl;
    cout << "Warna      : " << warna << endl;
    cout << "Bahan      : " << bahan << endl;
}
