#include "DetailBuku.h"
#include <iostream>
using namespace std;

DetailBuku::DetailBuku() : KategoriProduk() {}
DetailBuku::DetailBuku(string idProduk, string namaProduk, int harga, int stok,
                       string idKategori, string namaKategori,
                       string idBuku, string penulis, string penerbit, int jumlahHalaman)
    : KategoriProduk(idProduk, namaProduk, harga, stok, idKategori, namaKategori)
{
    this->idBuku = idBuku;
    this->penulis = penulis;
    this->penerbit = penerbit;
    this->jumlahHalaman = jumlahHalaman;
}

string DetailBuku::getIdBuku() { return idBuku; }
void DetailBuku::setIdBuku(string id) { idBuku = id; }

string DetailBuku::getPenulis() { return penulis; }
void DetailBuku::setPenulis(string p) { penulis = p; }

string DetailBuku::getPenerbit() { return penerbit; }
void DetailBuku::setPenerbit(string penerbit) { this->penerbit = penerbit; }

int DetailBuku::getJumlahHalaman() { return jumlahHalaman; }
void DetailBuku::setJumlahHalaman(int j) { jumlahHalaman = j; }

void DetailBuku::tampilkanInfo()
{
    cout << "\n[Buku]" << endl;
    KategoriProduk::tampilkanInfo();
    cout << "ID Buku   : " << idBuku << endl;
    cout << "Penulis   : " << penulis << endl;
    cout << "Penerbit  : " << penerbit << endl;
    cout << "Halaman   : " << jumlahHalaman << endl;
}
