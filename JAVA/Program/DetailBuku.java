public class DetailBuku extends KategoriProduk {
    private String idBuku, penulis, penerbit;
    private int jumlahHalaman;

    public DetailBuku(String idProduk, String namaProduk, int harga, int stok,
                      String idKategori, String namaKategori,
                      String idBuku, String penulis, String penerbit, int jumlahHalaman) {
        super(idProduk, namaProduk, harga, stok, idKategori, namaKategori);
        this.idBuku = idBuku;
        this.penulis = penulis;
        this.penerbit = penerbit;
        this.jumlahHalaman = jumlahHalaman;
    }

    @Override
    public void tampilkanInfo() {
        super.tampilkanInfo();
        System.out.println("ID Buku       : " + idBuku);
        System.out.println("Penulis       : " + penulis);
        System.out.println("Penerbit      : " + penerbit);
        System.out.println("Halaman       : " + jumlahHalaman);
    }
}
