import java.util.ArrayList;

public class Pembeli extends User {
    private String idPembeli, alamat;
    private ArrayList<Produk> keranjang = new ArrayList<>();

    public Pembeli(String idUser, String nama, String email, String password, String noHp,
                   String idPembeli, String alamat) {
        super(idUser, nama, email, password, noHp);
        this.idPembeli = idPembeli;
        this.alamat = alamat;
    }

    public void tambahKeKeranjang(Produk p) {
        keranjang.add(p);
    }

    @Override
    public void tampilkanInfo() {
        super.tampilkanInfo();
        System.out.println("ID Pembeli : " + idPembeli);
        System.out.println("Alamat     : " + alamat);
        System.out.println("=== Keranjang ===");
        for (Produk p : keranjang) {
            p.tampilkanInfo();
            System.out.println("-----------------");
        }
    }
}
