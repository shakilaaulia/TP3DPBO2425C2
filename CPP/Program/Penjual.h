#ifndef PENJUAL_H
#define PENJUAL_H
#include "User.h"
#include "Produk.h"
#include <vector>

class Penjual : public User
{
private:
    string idPenjual, namaToko, alamatToko;
    vector<Produk *> daftarProduk;

public:
    Penjual();
    Penjual(string idUser, string nama, string email, string password, string noHp,
            string idPenjual, string namaToko, string alamatToko);

    string getIdPenjual();
    void setIdPenjual(string id);

    string getNamaToko();
    void setNamaToko(string nama);

    string getAlamatToko();
    void setAlamatToko(string alamat);

    void tambahProduk(Produk *p);

    void tampilkanInfo() override;
};
#endif
