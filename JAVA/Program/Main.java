public class Main {
    public static void main(String[] args) {
        // Produk awal
        DetailElektronik laptop = new DetailElektronik("PR001", "Laptop ASUS ROG", 20000000, 5,
                "K001", "Elektronik",
                "E001", "2 Tahun", "65W", "Intel i7, 16GB RAM, SSD 512GB");

        DetailFashion sepatu = new DetailFashion("PR002", "Sepatu Nike Air", 1500000, 10,
                "K002", "Fashion",
                "F001", "42", "Hitam", "Kulit Asli");

        DetailBuku buku = new DetailBuku("PR003", "Laskar Pelangi", 75000, 20,
                "K003", "Buku",
                "B001", "Andrea Hirata", "Bentang Pustaka", 450);

        // Penjual
        Penjual penjual1 = new Penjual("U002", "Jaya Wijaya", "tokojaya@mail.com", "tokopass", "082233445566",
                "S001", "Toko Jaya", "Jl. Sudirman No. 5");

        penjual1.tambahProduk(laptop);
        penjual1.tambahProduk(sepatu);
        penjual1.tambahProduk(buku);

        // Pembeli
        Pembeli pembeli1 = new Pembeli("U001", "Andi", "andi@mail.com", "pass123", "08123456789",
                "P001", "Jl. Merdeka No. 10");

        pembeli1.tambahKeKeranjang(sepatu);
        pembeli1.tambahKeKeranjang(buku);

        System.out.println("=== SEBELUM TAMBAH ===");
        System.out.println("- PENJUAL -");
        penjual1.tampilkanInfo();
        System.out.println("- PEMBELI -");
        pembeli1.tampilkanInfo();

        // Produk tambahan
        DetailElektronik hp = new DetailElektronik("PR004", "iPhone 15", 25000000, 3,
                "K001", "Elektronik",
                "E002", "1 Tahun", "30W", "Apple A16, 128GB");

        DetailFashion jaket = new DetailFashion("PR005", "Jaket Uniqlo", 500000, 15,
                "K002", "Fashion",
                "F002", "L", "Biru", "Polyester");

        // Tambah ke penjual & pembeli
        penjual1.tambahProduk(hp);
        penjual1.tambahProduk(jaket);

        pembeli1.tambahKeKeranjang(hp);

        System.out.println("\n=== SESUDAH TAMBAH ===");
        System.out.println("- PENJUAL -");
        penjual1.tampilkanInfo();
        System.out.println("- PEMBELI -");
        pembeli1.tampilkanInfo();
    }
}
