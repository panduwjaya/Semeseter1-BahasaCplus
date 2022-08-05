#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream instream;
    ofstream outstream;

    instream.open("ipk.dat");
    outstream.open("ipk_3.dat");
    bool null = instream.peek() == EOF;

    float IPK;
    int nomor;
    int count = 0;
    string namaMahasiswa;
    

    if (!null) {
        cout << "NAMA MAHASISWA" << "\t\t" << "IPK" << endl;
        cout << "==============================" << endl;

        while (instream) {
            getline(instream, namaMahasiswa, ';');
            instream >> IPK;
            nomor = count++;

            if ( IPK >= 3.0) {
                
                cout << namaMahasiswa << "\t\t" << IPK;
                outstream << namaMahasiswa << "\t\t" << IPK;
            }
        }
        instream.close();
        outstream.close();

    } else {
        cout << "File kosong" << endl;
    }
    return 0;
}