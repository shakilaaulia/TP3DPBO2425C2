from KategoriProduk import KategoriProduk

class DetailBuku(KategoriProduk):
    def __init__(self, id_produk, nama_produk, harga, stok,
                 id_kategori, nama_kategori,
                 id_buku, penulis, penerbit, jumlah_halaman):
        super().__init__(id_produk, nama_produk, harga, stok, id_kategori, nama_kategori)
        self.id_buku = id_buku
        self.penulis = penulis
        self.penerbit = penerbit
        self.jumlah_halaman = jumlah_halaman

    def tampilkan_info(self):
        super().tampilkan_info()
        print(f"ID Buku       : {self.id_buku}")
        print(f"Penulis       : {self.penulis}")
        print(f"Penerbit      : {self.penerbit}")
        print(f"Halaman       : {self.jumlah_halaman}")
