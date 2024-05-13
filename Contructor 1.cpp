#include <iostream>
using namespace std;

class mahasiswa
{
public:
    static int nim;
    int Id;
    string nama;

    void setId();

    void printAll();
    mahasiswa(string pNama) : nama(pNama)
    {
        setId();
    }
    

    
      
};

int mahasiswa::nim = 20;
void mahasiswa::setId()
{
    Id = nim++;
}

void mahasiswa::printAll()
{
    cout << " ID = " << Id << endl;
    cout << " Nama = " << nama << endl;
    cout << endl;
}
