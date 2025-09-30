from User import User

class Penjual(User):
    def __init__(self, id_user, nama, email, password, no_hp,
                 id_toko, nama_toko, alamat_toko):
        super().__init__(id_user, nama, email, password, no_hp)
        self.id_toko = id_toko
        self.nama_toko = nama_toko
        self.alamat_toko = alamat_toko
        self.daftar_produk = []

    def tambah_produk(self, produk):
        self.daftar_produk.append(produk)

    def tampilkan_info(self):
        super().tampilkan_info()
        print(f"ID Toko   : {self.id_toko}")
        print(f"Nama Toko : {self.nama_toko}")
        print(f"Alamat    : {self.alamat_toko}")
        print("=== Daftar Produk ===")
        for p in self.daftar_produk:
            p.tampilkan_info()
            print("----------------------")
