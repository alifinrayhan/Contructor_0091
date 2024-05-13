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