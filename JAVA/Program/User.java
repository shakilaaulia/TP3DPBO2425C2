public class User {
    protected String idUser, nama, email, password, noHp;

    public User(String idUser, String nama, String email, String password, String noHp) {
        this.idUser = idUser;
        this.nama = nama;
        this.email = email;
        this.password = password;
        this.noHp = noHp;
    }

    public void tampilkanInfo() {
        System.out.println("User ID   : " + idUser);
        System.out.println("Nama      : " + nama);
        System.out.println("Email     : " + email);
        System.out.println("No HP     : " + noHp);
    }
}
