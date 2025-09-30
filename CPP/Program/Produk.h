#ifndef PRODUK_H
#define PRODUK_H
#include <string>
using namespace std;

class Produk
{
protected:
    string idProduk, namaProduk;
    int harga, stok;

public:
    Produk();
    Produk(string idProduk, string namaProduk, int harga, int stok);

    string getIdProduk();
    void setIdProduk(string id);

    string getNamaProduk();
    void setNamaProduk(string n);

    int getHarga();
    void setHarga(int h);

    int getStok();
    void setStok(int s);

    virtual void tampilkanInfo();
    virtual ~Produk();
};
#endif
