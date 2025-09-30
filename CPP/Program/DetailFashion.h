#ifndef DETAILFASHION_H
#define DETAILFASHION_H
#include "KategoriProduk.h"

class DetailFashion : public KategoriProduk
{
private:
    string idFashion, ukuran, warna, bahan;

public:
    DetailFashion();
    DetailFashion(string idProduk, string namaProduk, int harga, int stok,
                  string idKategori, string namaKategori,
                  string idFashion, string ukuran, string warna, string bahan);

    string getIdFashion();
    void setIdFashion(string id);

    string getUkuran();
    void setUkuran(string u);

    string getWarna();
    void setWarna(string w);

    string getBahan();
    void setBahan(string b);

    void tampilkanInfo() override;
};
#endif
