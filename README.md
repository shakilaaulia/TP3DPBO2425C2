# TP3DPBO2425C2
## JANJI
Saya Shakila Aulia dengan NIM 2403086 mengerjakan Tugas Praktikum 2 dalam mata kuliah Desain dan Pemograman Berorientasi Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin

---
## DESAIN DAN KODE FLOW
**Desain**

![Tampilan Diagram](TP3-UML.png)

Untuk desain sendiri menggunakan tiga class yaitu IdentitasProduk, KategoriProduk, dan Spesifikasi Produk, yang memiliki atribut dan method:
1. IdentitasProduk
Dibuat untuk menampilkan identitas dasar dari sebuah produk yaitu:
Atribut
- idProduk
- namaProduk
- stok
- harga
- gambar (khusus versi web PHP)

Method
- tampilkan_info() -> untuk menampilkan info identitas produknya


2. SpesifikasiProduk
Dibuat untuk menampilkan termasuk jenis kategori apa produk tersebut berdasarkan atribut yaitu:
Atribut
- jenisProduk
- merk
- asalNegara
- garansi

+atribut dari IdentitasProduk diturunkan dalam class ini berdasarkan konsep inheritance, sehigga tak perlu menulis ulang atribut

Method
- tampilkan_kategori() -> untuk menampilkan info kategori produknya


3. KategoriProduk
Dibuat untuk menampilkan infolebih detail yaitu spesifikasi dari produk yang ada yaitu:
Atribut
- ukuran
- warna
- daya
- fitur

+atribut dari IdentitasProduk dan KategoriProduk diturunkan dalam class ini berdasarkan konsep inheritance,sehigga tak perlu menulis ulang atribut

Method
- tampilkan_spesifikasi() -> untuk menampilkan info spesifikasi produknya

**Kode Flow**
Penjelasan Kode Flow dari tiap bahasa:
1. C++, Java, PYTHON
     - Program mulai dari Main.cpp untuk membuat data secara hardcode dengan memasukkannya ke dalam list object
     - Menampilkan tabel berisi data yang sudah dimasukkan sebelumnya
     - Menambahkan data dengan meminta user untuk input
     - Ketika memasukkan ID maka akan dicek terlebih dahulu, jika id belum ada maka akan ditambahkan, jika tidak maka akan gagal memasukkan
     - Menampilkan kembali tabel dengan data yang sudah bertambah

2. PHP
     - Program mulai dari Index.php dengan membuat tabel
     - Membuat list object lalu memasukkan datanya mengunakan set
     - Menampilkan data dalam tabel dengan get
---
## DOKUMENTASI
**Tampilan Output CLI (CPP,JAVA,PYTHON)**

![Tampilan Output CLI (CPP,JAVA,PYTHON)](Dokum-CLI.png)

**Tampilan WEBSITE (PHP)**

![Tampilan Output WEBSITE (PHP)](Dokum-Web.png)

*Dokumentasi lebih lanjut berupa screen record ada dalam folder dokumentasi
