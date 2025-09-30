class Produk:
    def __init__(self, id_produk, nama_produk, harga, stok):
        self.id_produk = id_produk
        self.nama_produk = nama_produk
        self.harga = harga
        self.stok = stok

    def tampilkan_info(self):
        print(f"Produk ID : {self.id_produk}")
        print(f"Nama      : {self.nama_produk}")
        print(f"Harga     : {self.harga}")
        print(f"Stok      : {self.stok}")
