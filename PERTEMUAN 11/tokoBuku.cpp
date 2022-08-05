#include <iostream>
#include <ctime>
using namespace std;

// Untuk mendapatkan tanggal dan waktu sistem
time_t now = time(0);
char* dt = ctime(&now);

// Untuk menyambut pembeli
void welcome();

// Untuk memproses pembelian
int proses(int hargaBuku, float diskon);

// Badan dari program
int main() {
    welcome();

    // Deklarasi variabel
    string judulBuku[10];
    int hargaBuku[10];
    int diskonBuku[10];
    int totalHarga;
    int totalDiskon;
    int totalBayar;
    int uang;
    bool isNotFinished = false;
    bool sedangBelanja = true;
    int i = 0;
    char lanjutBelanja;

    cout << "Catatan: Gunakan underscore untuk memisahkan kata dalam judul!" << endl << endl;
    
    // Meminta nama dan harga buku dari pembeli
    while (sedangBelanja) {
        cout << "Masukan judul buku: ";
        cin >> judulBuku[i];
        cout << "Masukan harga buku: ";
        cin >> hargaBuku[i];

        // Menentukan besar diskon
        if (hargaBuku[i] >= 250000) {
            diskonBuku[i] = proses(hargaBuku[i], 0.10);
            cout << "Anda mendapatkan diskon sebesar 10%" << endl;

        } else if (hargaBuku[i] >= 150000) {
            diskonBuku[i] = proses(hargaBuku[i], 0.07);
            cout << "Anda mendapatkan diskon sebesar 7%" << endl;
            
        } else if (hargaBuku[i] >= 100000) {
            diskonBuku[i] = proses(hargaBuku[i], 0.05);
            cout << "Anda mendapatkan diskon sebesar 5%" << endl;

        } else {
            cout << "Anda tidak mendapatkan diskon" << endl;
            diskonBuku[i] = hargaBuku[i];
        }

        // Perhitungan pembelian
        totalDiskon = totalBayar;
        totalHarga = totalHarga + hargaBuku[i];
        totalBayar = totalBayar + diskonBuku[i];
        totalDiskon = totalDiskon - diskonBuku[i];

        i++;
        // Menentukan apakah masih ingin berbelanja
        cout << "Apakah selesai berbelanja? (Y / T): ";
        cin >> lanjutBelanja;
        cout << endl;

        // Menentukan apakah input sesuai kondisi atau tidak
        do {
            switch (lanjutBelanja) {
            case 'Y':
                sedangBelanja = false;
                isNotFinished = true;
                break;
            case 'y':
                sedangBelanja = false;
                isNotFinished = true;
                break;
            case 'T':
                sedangBelanja = true;
                isNotFinished = true;
                break;
            case 't':
                sedangBelanja = true;
                isNotFinished = true;
                break;
            default:
                cout << "Karakter yang anda masukan salah!" << endl;
                isNotFinished = false;
                cin >> lanjutBelanja;
                break;
            }
        } while (isNotFinished == false);

        // Akhir perulangan
    } 


    cout << "Silahkan bayar: ";
    cin >> uang;
    cout << endl << "Struk anda: " << endl;

    // Pembuatan struk pembeli
    welcome();

    cout << endl;
    cout << "   NO : BK0000001" << endl;
    cout << "   TGL: " << dt << endl;
    cout << "   OP : Sari" << endl;
    cout << "=========================================" << endl;
    for (int j = 0; j < i; j++) {
        cout << j + 1 << ". " << judulBuku[j] << endl;
        cout << "   Harga      : " << hargaBuku[j] << endl;
    }
    cout << "=========================================" << endl << endl;
    cout << "   Total Harga: " << totalHarga << endl << endl;
    cout << "   Diskon     : " << totalDiskon << endl;
    cout << "   Total Bayar: " << totalBayar << endl;
    cout << "   Kembali    : " << uang - totalBayar << endl;
    cout << "======TERIMA KASIH TELAH BERBELANJA======" << endl;

}

void welcome() {
    cout << "==============TOKO MARIBACA==============" << endl;
    cout << "|         JL. RADEN INTEN NO.99         |" << endl;
    cout << "|        Bandar Lampung, Lampung        |" << endl;
    cout << "=========================================" << endl;
    cout << endl;
}

int proses(int hargaBuku, float diskon) {
    int hargaDiskon = hargaBuku * diskon;
    return  hargaBuku - hargaDiskon;
}
