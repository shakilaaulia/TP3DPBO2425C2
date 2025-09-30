from KategoriProduk import KategoriProduk

class DetailElektronik(KategoriProduk):
    def __init__(self, id_produk, nama_produk, harga, stok,
                 id_kategori, nama_kategori,
                 id_elektronik, garansi, daya, spesifikasi):
        super().__init__(id_produk, nama_produk, harga, stok, id_kategori, nama_kategori)
        self.id_elektronik = id_elektronik
        self.garansi = garansi
        self.daya = daya
        self.spesifikasi = spesifikasi

    def tampilkan_info(self):
        super().tampilkan_info()
        print(f"ID Elektronik : {self.id_elektronik}")
        print(f"Garansi       : {self.garansi}")
        print(f"Daya          : {self.daya}")
        print(f"Spesifikasi   : {self.spesifikasi}")
