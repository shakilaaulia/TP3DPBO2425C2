public class DetailFashion extends KategoriProduk {
    private String idFashion, ukuran, warna, bahan;

    public DetailFashion(String idProduk, String namaProduk, int harga, int stok,
                         String idKategori, String namaKategori,
                         String idFashion, String ukuran, String warna, String bahan) {
        super(idProduk, namaProduk, harga, stok, idKategori, namaKategori);
        this.idFashion = idFashion;
        this.ukuran = ukuran;
        this.warna = warna;
        this.bahan = bahan;
    }

    @Override
    public void tampilkanInfo() {
        super.tampilkanInfo();
        System.out.println("ID Fashion    : " + idFashion);
        System.out.println("Ukuran        : " + ukuran);
        System.out.println("Warna         : " + warna);
        System.out.println("Bahan         : " + bahan);
    }
}
