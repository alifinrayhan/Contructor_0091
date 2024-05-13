#include <iostream>
using namespace std;

class Mahasiswa
{
private:
    static int nim;

public:
    int id;
    string nama;


    void setId();
    void printAll();

    static void setNim( int pNim) { nim = pNim;}
    static int getNim() {return nim;}  

    Mahasiswa(string pNama) : nama(pNama)
    {
        setId();
    }      
};

int Mahasiswa::nim = 100;
void Mahasiswa::setId()
{
    id = ++nim;
}

void Mahasiswa::printAll()
{
    cout << " ID = " << id << endl;
    cout << " Nama = " << nama << endl;
    cout << endl;
}

