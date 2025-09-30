class User:
    def __init__(self, id_user, nama, email, password, no_hp):
        self.id_user = id_user
        self.nama = nama
        self.email = email
        self.password = password
        self.no_hp = no_hp

    def tampilkan_info(self):
        print(f"User ID   : {self.id_user}")
        print(f"Nama      : {self.nama}")
        print(f"Email     : {self.email}")
        print(f"No HP     : {self.no_hp}")
