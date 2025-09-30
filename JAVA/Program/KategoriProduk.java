public class KategoriProduk extends Produk {
    protected String idKategori, namaKategori;

    public KategoriProduk(String idProduk, String namaProduk, int harga, int stok,
                          String idKategori, String namaKategori) {
        super(idProduk, namaProduk, harga, stok);
        this.idKategori = idKategori;
        this.namaKategori = namaKategori;
    }

    @Override
    public void tampilkanInfo() {
        super.tampilkanInfo();
        System.out.println("Kategori  : " + namaKategori + " (" + idKategori + ")");
    }
}
