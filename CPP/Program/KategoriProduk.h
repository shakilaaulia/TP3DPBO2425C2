#ifndef KATEGORI_PRODUK_H
#define KATEGORI_PRODUK_H
#include "Produk.h"

class KategoriProduk : public Produk
{
protected:
    string idKategori, namaKategori;

public:
    KategoriProduk();
    KategoriProduk(string idProduk, string namaProduk, int harga, int stok,
                   string idKategori, string namaKategori);

    string getIdKategori();
    void setIdKategori(string id);

    string getNamaKategori();
    void setNamaKategori(string nama);

    void tampilkanInfo() override;
};
#endif
