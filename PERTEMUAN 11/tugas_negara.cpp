#include <iostream>
#include <ctime>
#include <fstream>
using namespace std;

int main() {
    time_t now = time(0);
    char *wt = ctime(&now);

    int jmlh_pesanan, metode_pembayaran;
    int dibayar, diskon, nomor_pegawai;
    string oprator;
    
    struct{
        int jmlh_pembelian, harga, sub_total;
        string code, jenis_barang;
    }struk_bayar[1000];
    

    cout << "===============================================" << endl;
    cout << "=         SELAMAT DATANG DI TOKO BUKU         =" << endl;
    cout << "=               GRAMEDIA LAMPUNG              =" << endl;
    cout << "===============================================" << endl << endl;


    cout << "   DIBAWAH INI ADALAH LIST DAFTAR HARGA BUKU     " << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "| NO  |     JENIS BUKU     |   HARGA     | KODE |" << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "| 1   |   BUKU GAMBAR      |   RP.3000   |  A1  |" << endl;
    cout << "| 2   |   BUKU TULIS       |   Rp.20000  |  A2  |" << endl;
    cout << "| 3   |   BUKU ANAK-ANAK   |   RP.30000  |  A3  |" << endl;
    cout << "| 4   |   BUKU DONGENG     |   Rp.50000  |  A4  |" << endl;
    cout << "| 5   |   JUZ AMA (30 juzz)|   RP.40000  |  A5  |" << endl;
    cout << "| 6   |   AL-QUR'AN        |   RP.78000  |  A6  |" << endl;
    cout << "| 7   |   KAMUS            |   RP.100000 |  A7  |" << endl;
    cout << "| 8   |   BUKU MASAKAN     |   Rp.50000  |  A8  |" << endl;
    cout << "-------------------------------------------------" << endl << endl;

    //identitas
    cout << "MASUKAN NAMA PENANGGUNG JAWAB KASIR/OPERATOR : ";
    cin >> oprator;
    cout << "MASUKAN NOMOR PEGAWAI : ";
    cin >> nomor_pegawai;
    cout << "=========================================" <<endl;

    //pesanan
    cout << "MASUKAN JUMLAH PESANAN : ";
    cin >> jmlh_pesanan;

    //jumlah pesanan
    for (int i = 1; i <= jmlh_pesanan; i++){
        cout << "Masukkan Kode Barang " << i << " : ";
        cin >> struk_bayar[i].code;
        reverse:
            if (struk_bayar[i].code == "A1" || "a1"){
                struk_bayar[i].jenis_barang = "BUKU GAMBAR";
                struk_bayar[i].harga = 3000;

            }else if(struk_bayar[i].code == "A2" || "a2"){
                struk_bayar[i].jenis_barang = "BUKU TULIS";
                struk_bayar[i].harga = 15000;

            }else if(struk_bayar[i].code == "A3" || "a3"){
                struk_bayar[i].jenis_barang = "BUKU ANAK-ANAK";
                struk_bayar[i].harga = 35000;

            }else if(struk_bayar[i].code == "A4" || "a4"){
                struk_bayar[i].jenis_barang = "BUKU DONGENG";
                struk_bayar[i].harga = 40000;

            }else if(struk_bayar[i].code == "A5" || "a5"){
                struk_bayar[i].jenis_barang = "JUZ AMA (30 juzz)";
                struk_bayar[i].harga = 80000;

            }else if(struk_bayar[i].code == "A6" || "a6"){
                struk_bayar[i].jenis_barang = "AL-QUR'AN";
                struk_bayar[i].harga = 60000;

            }else if(struk_bayar[i].code == "A7" || "a7"){
                struk_bayar[i].jenis_barang = "KAMUS";
                struk_bayar[i].harga = 100000;

            }else if(struk_bayar[i].code == "A8" || "a8"){
                struk_bayar[i].jenis_barang = "BUKU MASAKAN";
                struk_bayar[i].harga = 150000;

            }else{
                goto reverse;
            }        
        cout << "Masukkan Jumlah Pembelian : ";
        cin >> struk_bayar[i].jmlh_pembelian;
    }
    system("cls");
        

    cout << "========================================= \n";
    cout << "|           TOKO BUKU GRAMEDIA          | \n";
    cout << "|          TANJUNG KARANG NO.09         | \n";
    cout << "========================================= \n\n";
    
    cout << " NO PEGAWAI : " << nomor_pegawai << endl;
    cout << " OPRATOR : " << oprator;
    cout << endl;
    cout << " TGL." << wt << endl;
    cout << "=========================================" <<endl;
    
    for(int i=1; i<= jmlh_pesanan; i++){
        cout << "BARANG YANG DIBELI" << " " << struk_bayar[i].jenis_barang << " = ";
        struk_bayar[i].sub_total = struk_bayar[i].jmlh_pembelian * struk_bayar[i].harga;
        cout << " " << struk_bayar[i].jmlh_pembelian << "  X  " << struk_bayar[i].harga; 
        cout << " = " << struk_bayar[i].sub_total <<endl;
    }
    cout << "=========================================" <<endl;

    int isi;
    
    //perulangan
    for(int i=1; i<=jmlh_pesanan; i++){
        isi = struk_bayar[i].sub_total + isi; 
    }
    
    if ((isi >= 100000) && (isi < 150000)){
    diskon = (5 * isi)/100; 
    }else if ((isi >= 150000) && (isi < 250000)){
    diskon = (7 * isi)/100; 
    }else if (isi >= 250000){
    diskon = (10 * isi)/100; 
    }else {
    diskon = 0;
    } 

    cout << endl;
    cout << "METODE PEMBAYARAN (CASH / KARTU KREDIT) : ";
    cin >> metode_pembayaran;
    cout << "Total       :   " << isi << endl;
    cout << "Total bayar :   " << isi - diskon << endl;
    cout << "Diskon      :   " << diskon << endl;
    cout << "Bayar       :   "; 
    cin >> dibayar;
    cout << "\n" <<"Kembalian   :   " << dibayar - (isi - diskon) <<endl;
    cout << endl;

    cout << "--------------------------------------" <<endl;
    cout << "     TERIMA KASIH TELAH BERBELANJA    " <<endl;
    cout << "      NIKMATI BELANJA HARGA MURAH     " <<endl;
    cout << "--------------------------------------" <<endl;
    cout << "=========================================" <<endl;
    

    return 0;

}