#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream mahasiswa("IPK.dat");
    ofstream mahasiswa3;
    mahasiswa3.open("IPK_3.dat");

    string namaDepan, namaBelakang;
    double ipk, count = 0.0;

    if (mahasiswa.is_open() && mahasiswa3.is_open())
    {
        while (mahasiswa >> namaDepan >> namaBelakang >> ipk)
        {
            if (ipk >= 3.0 && ipk <= 4.0)
            {
                cout << namaDepan << " " << namaBelakang << "\t" << ipk << endl;
                mahasiswa3 << namaDepan << " " << namaBelakang << "\t" << ipk << endl;
                count++;
            }
        }
        if (count != 0.0)
        {
            cout << "Data berhasil dipisah" << endl;
        }
        else
        {
            cout << "File kosong" << endl;
        }
        mahasiswa.close();
        mahasiswa3.close();
    }
    else
    {
        cout << "Failed to open ofstream" << endl;
    }
}