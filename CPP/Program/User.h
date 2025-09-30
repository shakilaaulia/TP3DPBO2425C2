#ifndef USER_H
#define USER_H
#include <string>
using namespace std;

class User
{
protected:
    string idUser, nama, email, password, noHp;

public:
    User();
    User(string idUser, string nama, string email, string password, string noHp);

    string getIdUser();
    void setIdUser(string id);

    string getNama();
    void setNama(string n);

    string getEmail();
    void setEmail(string e);

    string getPassword();
    void setPassword(string p);

    string getNoHp();
    void setNoHp(string hp);

    virtual void tampilkanInfo();
    virtual ~User();
};
#endif
