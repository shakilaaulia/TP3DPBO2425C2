#include "User.h"
#include <iostream>
using namespace std;

User::User() {}
User::User(string idUser, string nama, string email, string password, string noHp)
{
    this->idUser = idUser;
    this->nama = nama;
    this->email = email;
    this->password = password;
    this->noHp = noHp;
}

string User::getIdUser() { return idUser; }
void User::setIdUser(string id) { idUser = id; }

string User::getNama() { return nama; }
void User::setNama(string n) { nama = n; }

string User::getEmail() { return email; }
void User::setEmail(string e) { email = e; }

string User::getPassword() { return password; }
void User::setPassword(string p) { password = p; }

string User::getNoHp() { return noHp; }
void User::setNoHp(string hp) { noHp = hp; }

void User::tampilkanInfo()
{
    cout << "ID User : " << idUser << endl;
    cout << "Nama    : " << nama << endl;
    cout << "Email   : " << email << endl;
    cout << "No HP   : " << noHp << endl;
}

User::~User() {}
