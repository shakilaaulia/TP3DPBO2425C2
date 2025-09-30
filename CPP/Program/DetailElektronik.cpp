#include "DetailElektronik.h"
#include <iostream>
using namespace std;

DetailElektronik::DetailElektronik() : KategoriProduk() {}
DetailElektronik::DetailElektronik(string idProduk, string namaProduk, int harga, int stok,
                                   string idKategori, string namaKategori,
                                   string idElektronik, string garansi, string daya, string spesifikasi)
    : KategoriProduk(idProduk, namaProduk, harga, stok, idKategori, namaKategori)
{
    this->idElektronik = idElektronik;
    this->garansi = garansi;
    this->daya = daya;
    this->spesifikasi = spesifikasi;
}

string DetailElektronik::getIdElektronik() { return idElektronik; }
void DetailElektronik::setIdElektronik(string id) { idElektronik = id; }

string DetailElektronik::getGaransi() { return garansi; }
void DetailElektronik::setGaransi(string g) { garansi = g; }

string DetailElektronik::getDaya() { return daya; }
void DetailElektronik::setDaya(string d) { daya = d; }

string DetailElektronik::getSpesifikasi() { return spesifikasi; }
void DetailElektronik::setSpesifikasi(string s) { spesifikasi = s; }

void DetailElektronik::tampilkanInfo()
{
    cout << "\n[Elektronik]" << endl;
    KategoriProduk::tampilkanInfo();
    cout << "ID Elektronik : " << idElektronik << endl;
    cout << "Garansi       : " << garansi << endl;
    cout << "Daya          : " << daya << endl;
    cout << "Spesifikasi   : " << spesifikasi << endl;
}
