from User import User

class Pembeli(User):
    def __init__(self, id_user, nama, email, password, no_hp,
                 id_pembeli, alamat):
        super().__init__(id_user, nama, email, password, no_hp)
        self.id_pembeli = id_pembeli
        self.alamat = alamat
        self.keranjang = []

    def tambah_ke_keranjang(self, produk):
        self.keranjang.append(produk)

    def tampilkan_info(self):
        super().tampilkan_info()
        print(f"ID Pembeli : {self.id_pembeli}")
        print(f"Alamat     : {self.alamat}")
        print("=== Keranjang ===")
        for p in self.keranjang:
            p.tampilkan_info()
            print("-----------------")
