from KategoriProduk import KategoriProduk

class DetailFashion(KategoriProduk):
    def __init__(self, id_produk, nama_produk, harga, stok,
                 id_kategori, nama_kategori,
                 id_fashion, ukuran, warna, bahan):
        super().__init__(id_produk, nama_produk, harga, stok, id_kategori, nama_kategori)
        self.id_fashion = id_fashion
        self.ukuran = ukuran
        self.warna = warna
        self.bahan = bahan

    def tampilkan_info(self):
        super().tampilkan_info()
        print(f"ID Fashion    : {self.id_fashion}")
        print(f"Ukuran        : {self.ukuran}")
        print(f"Warna         : {self.warna}")
        print(f"Bahan         : {self.bahan}")
