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

