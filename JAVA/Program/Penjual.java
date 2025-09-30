import java.util.ArrayList;

public class Penjual extends User {
    private String idToko, namaToko, alamatToko;
    private ArrayList<Produk> daftarProduk = new ArrayList<>();

    public Penjual(String idUser, String nama, String email, String password, String noHp,
                   String idToko, String namaToko, String alamatToko) {
        super(idUser, nama, email, password, noHp);
        this.idToko = idToko;
        this.namaToko = namaToko;
        this.alamatToko = alamatToko;
    }

    public void tambahProduk(Produk p) {
        daftarProduk.add(p);
    }

    @Override
    public void tampilkanInfo() {
        super.tampilkanInfo();
        System.out.println("ID Toko   : " + idToko);
        System.out.println("Nama Toko : " + namaToko);
        System.out.println("Alamat    : " + alamatToko);
        System.out.println("=== Daftar Produk ===");
        for (Produk p : daftarProduk) {
            p.tampilkanInfo();
            System.out.println("----------------------");
        }
    }
}
