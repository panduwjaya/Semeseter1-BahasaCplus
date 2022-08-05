#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream inIPK;
    ofstream outIPK;
    double IPKMahasiswa;
    string namaMahasiswa;
    inIPK.open("ipk.dat");
    outIPK.open("ipk_3.dat");
    
    // Memerika apakah file kosong
    bool fileKosong = inIPK.peek() == EOF;
    if (!fileKosong) {
        while (inIPK) {
            // Menerima input dari file eksternal
            getline(inIPK, namaMahasiswa, ';');
            inIPK >> IPKMahasiswa;
            // Memeriksa besar IPK mahasiswa
            if ( IPKMahasiswa >= 3.0) {
                cout << namaMahasiswa << "\t\t" << IPKMahasiswa;
                outIPK << namaMahasiswa << "\t\t" << IPKMahasiswa;
            }
        }
        inIPK.close();
        outIPK.close();
    } else {
        cout << "File kosong" << endl;
    }
    return 0;
}