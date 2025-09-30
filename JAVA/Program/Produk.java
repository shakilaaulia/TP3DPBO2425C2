public class Produk {
    protected String idProduk, namaProduk;
    protected int harga, stok;

    public Produk(String idProduk, String namaProduk, int harga, int stok) {
        this.idProduk = idProduk;
        this.namaProduk = namaProduk;
        this.harga = harga;
        this.stok = stok;
    }

    public void tampilkanInfo() {
        System.out.println("Produk ID : " + idProduk);
        System.out.println("Nama      : " + namaProduk);
        System.out.println("Harga     : " + harga);
        System.out.println("Stok      : " + stok);
    }
}
