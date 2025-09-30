#ifndef PEMBELI_H
#define PEMBELI_H
#include "User.h"
#include "Produk.h"
#include <vector>

class Pembeli : public User
{
private:
    string idPembeli, alamatPengiriman;
    vector<Produk *> keranjang;

public:
    Pembeli();
    Pembeli(string idUser, string nama, string email, string password, string noHp,
            string idPembeli, string alamat);

    string getIdPembeli();
    void setIdPembeli(string id);

    string getAlamatPengiriman();
    void setAlamatPengiriman(string alamat);

    void tambahKeKeranjang(Produk *p);

    void tampilkanInfo() override;
};
#endif
