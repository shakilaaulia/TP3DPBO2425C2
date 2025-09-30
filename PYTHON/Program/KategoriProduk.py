from Produk import Produk

class KategoriProduk(Produk):
    def __init__(self, id_produk, nama_produk, harga, stok, id_kategori, nama_kategori):
        super().__init__(id_produk, nama_produk, harga, stok)
        self.id_kategori = id_kategori
        self.nama_kategori = nama_kategori

    def tampilkan_info(self):
        super().tampilkan_info()
        print(f"Kategori  : {self.nama_kategori} ({self.id_kategori})")
