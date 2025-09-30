public class DetailElektronik extends KategoriProduk {
    private String idElektronik, garansi, daya, spesifikasi;

    public DetailElektronik(String idProduk, String namaProduk, int harga, int stok,
                            String idKategori, String namaKategori,
                            String idElektronik, String garansi, String daya, String spesifikasi) {
        super(idProduk, namaProduk, harga, stok, idKategori, namaKategori);
        this.idElektronik = idElektronik;
        this.garansi = garansi;
        this.daya = daya;
        this.spesifikasi = spesifikasi;
    }

    @Override
    public void tampilkanInfo() {
        super.tampilkanInfo();
        System.out.println("ID Elektronik : " + idElektronik);
        System.out.println("Garansi       : " + garansi);
        System.out.println("Daya          : " + daya);
        System.out.println("Spesifikasi   : " + spesifikasi);
    }
}
