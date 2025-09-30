#ifndef DETAILELEKTRONIK_H
#define DETAILELEKTRONIK_H
#include "KategoriProduk.h"

class DetailElektronik : public KategoriProduk
{
private:
    string idElektronik, garansi, daya, spesifikasi;

public:
    DetailElektronik();
    DetailElektronik(string idProduk, string namaProduk, int harga, int stok,
                     string idKategori, string namaKategori,
                     string idElektronik, string garansi, string daya, string spesifikasi);

    string getIdElektronik();
    void setIdElektronik(string id);

    string getGaransi();
    void setGaransi(string g);

    string getDaya();
    void setDaya(string d);

    string getSpesifikasi();
    void setSpesifikasi(string s);

    void tampilkanInfo() override;
};
#endif
