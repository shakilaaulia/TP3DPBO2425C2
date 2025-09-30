#ifndef DETAILBUKU_H
#define DETAILBUKU_H
#include "KategoriProduk.h"

class DetailBuku : public KategoriProduk
{
private:
    string idBuku, penulis, penerbit;
    int jumlahHalaman;

public:
    DetailBuku();
    DetailBuku(string idProduk, string namaProduk, int harga, int stok,
               string idKategori, string namaKategori,
               string idBuku, string penulis, string penerbit, int jumlahHalaman);

    string getIdBuku();
    void setIdBuku(string id);

    string getPenulis();
    void setPenulis(string p);

    string getPenerbit();
    void setPenerbit(string penerbit);

    int getJumlahHalaman();
    void setJumlahHalaman(int j);

    void tampilkanInfo() override;
};
#endif
