from DetailElektronik import DetailElektronik
from DetailFashion import DetailFashion
from DetailBuku import DetailBuku
from Penjual import Penjual
from Pembeli import Pembeli

def main():
    # Produk awal
    laptop = DetailElektronik("PR001", "Laptop ASUS ROG", 20000000, 5,
                              "K001", "Elektronik",
                              "E001", "2 Tahun", "65W", "Intel i7, 16GB RAM, SSD 512GB")

    sepatu = DetailFashion("PR002", "Sepatu Nike Air", 1500000, 10,
                           "K002", "Fashion",
                           "F001", "42", "Hitam", "Kulit Asli")

    buku = DetailBuku("PR003", "Laskar Pelangi", 75000, 20,
                      "K003", "Buku",
                      "B001", "Andrea Hirata", "Bentang Pustaka", 450)

    # Penjual
    penjual1 = Penjual("U002", "Jaya Wijaya", "tokojaya@mail.com", "tokopass", "082233445566",
                       "S001", "Toko Jaya", "Jl. Sudirman No. 5")

    penjual1.tambah_produk(laptop)
    penjual1.tambah_produk(sepatu)
    penjual1.tambah_produk(buku)

    # Pembeli
    pembeli1 = Pembeli("U001", "Andi", "andi@mail.com", "pass123", "08123456789",
                       "P001", "Jl. Merdeka No. 10")

    pembeli1.tambah_ke_keranjang(sepatu)
    pembeli1.tambah_ke_keranjang(buku)

    print("=== SEBELUM TAMBAH ===")
    print("\n=== PENJUAL ===")
    penjual1.tampilkan_info()
    print("\n=== PEMBELI ===")
    pembeli1.tampilkan_info()

    # Produk tambahan
    hp = DetailElektronik("PR004", "iPhone 15", 25000000, 3,
                          "K001", "Elektronik",
                          "E002", "1 Tahun", "30W", "Apple A16, 128GB")

    jaket = DetailFashion("PR005", "Jaket Uniqlo", 500000, 15,
                          "K002", "Fashion",
                          "F002", "L", "Biru", "Polyester")

    # Tambahkan ke penjual & pembeli
    penjual1.tambah_produk(hp)
    penjual1.tambah_produk(jaket)

    pembeli1.tambah_ke_keranjang(hp)

    print("\n=== SESUDAH TAMBAH ===")
    print("\n=== PENJUAL ===")
    penjual1.tampilkan_info()
    print("\n=== PEMBELI ===")
    pembeli1.tampilkan_info()

if __name__ == "__main__":
    main()
