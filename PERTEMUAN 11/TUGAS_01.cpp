#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;

void garis(){
    cout << "=========================================" <<endl;
}

int main(){
   time_t now = time(0);
   tm *ltm = localtime(&now);

    struct{
        int jumlah_beli, harga, sub_total;
        string kode, nama_barang;
    }struk_bayar[30];

    int i, jumlah_pesan, total, cash, diskon;
    string jenis_bayar;

    cout << endl << endl;
    cout << " SELAMAT DATANG DI TOKO BUKU KELOMPOK 3\n";
    cout << "             SELAMAT BELANJA\n";

    cout << "-----------------------------------------\n";
    cout << "|KODE |     NAMA BUKU     |   HARGA     |\n";
    cout << "-----------------------------------------\n";
    cout << "| A   |   BUKU TULIS      |   RP.5000   |\n";
    cout << "| B   |   BUKU ANAK       |   Rp.15000  |\n";
    cout << "| C   |   BUKU RELIGI     |   RP.35000  |\n";
    cout << "| D   |   BUKU FIKSI      |   Rp.40000  |\n";
    cout << "| E   |   BUKU PELAJARAN  |   RP.80000  |\n";
    cout << "| F   |   KAMUS B.INGGRIS |   RP.60000  |\n";
    cout << "| G   |   BUKU REFERENSI  |   RP.100000 |\n";
    cout << "| H   |   BUKU PSIKOLOGI  |   Rp.150000 |\n";
    cout << "| I   |   BUKU GAMBAR     |   RP.10000  |\n";
    cout << "| J   |   BUKU CERITA     |   RP.70000  |\n";
    cout << "-----------------------------------------\n\n";


    cout << "Data Masukan" <<endl;
    cout << "Masukkan Jumlah Pesanan : ";
    cin >> jumlah_pesan;
    cout << "Jenis Pembayaran (CASH/BANK) : ";
    cin >> jenis_bayar;

    for (i=1; i<=jumlah_pesan; i++){
        cek_kode_barang:
        cout << "Masukkan Kode Barang " << i << " : ";
        cin >> struk_bayar[i].kode;
            if (struk_bayar[i].kode == "A"){
                struk_bayar[i].nama_barang = "BUKU TULIS";
                struk_bayar[i].harga = 5000;
            }else if(struk_bayar[i].kode == "B"){
                struk_bayar[i].nama_barang = "BUKU ANAK";
                struk_bayar[i].harga = 15000;
            }else if(struk_bayar[i].kode == "C"){
                struk_bayar[i].nama_barang = "BUKU RELIGI";
                struk_bayar[i].harga = 35000;
            }else if(struk_bayar[i].kode == "D"){
                struk_bayar[i].nama_barang = "BUKU FIKSI";
                struk_bayar[i].harga = 40000;
            }else if(struk_bayar[i].kode == "E"){
                struk_bayar[i].nama_barang = "BUKU PELAJARAN";
                struk_bayar[i].harga = 80000;
            }else if(struk_bayar[i].kode == "F"){
                struk_bayar[i].nama_barang = "KAMUS B.INGGRIS";
                struk_bayar[i].harga = 60000;
            }else if(struk_bayar[i].kode == "G"){
                struk_bayar[i].nama_barang = "BUKU REFERENSI";
                struk_bayar[i].harga = 100000;
            }else if(struk_bayar[i].kode == "H"){
                struk_bayar[i].nama_barang = "BUKU PSIKOLOGI";
                struk_bayar[i].harga = 150000;
            }else if(struk_bayar[i].kode == "I"){
                struk_bayar[i].nama_barang = "BUKU GAMBAR";
                struk_bayar[i].harga = 10000;
            }else if(struk_bayar[i].kode == "J"){
                struk_bayar[i].nama_barang = "BUKU CERITA";
                struk_bayar[i].harga = 70000;
            }else{
                goto cek_kode_barang;
            }        
        cout << "Masukkan Jumlah Pembelian : ";
        cin >> struk_bayar[i].jumlah_beli;
    }
    system("cls");
    
    cout << "========================================= \n";
    cout << "|           TOKO BUKU KELOMPOK 3        | \n";
    cout << "|                  UNILA                | \n";
    cout << "========================================= \n\n";
    
    cout << " NO.  SPJ021010" << setw(25) <<"OP : DIMAS" <<endl;
    cout << " TGL. " << ltm->tm_mday << "-" << 1 + ltm->tm_mon << "-" << 1900 + ltm->tm_year << setw(20) << "PL : " << jenis_bayar <<endl;

    garis();
    for(i=1; i<=jumlah_pesan; i++){
        cout << " " << setiosflags(ios::left) << setw(4) << i;
        cout << " " << setprecision(6) << setw(8) << struk_bayar[i].nama_barang <<endl;
        cout << " " << setiosflags(ios::left) << setw(4) << " ";
        struk_bayar[i].sub_total = struk_bayar[i].jumlah_beli * struk_bayar[i].harga;
        cout << " " << struk_bayar[i].jumlah_beli << "  X  " << struk_bayar[i].harga; 
        cout << "\t\t" << struk_bayar[i].sub_total <<endl;
        garis();
    }

    if(jumlah_pesan == 1){
        total = struk_bayar[1].sub_total;
    }else if(jumlah_pesan == 2){
        total = struk_bayar[1].sub_total + struk_bayar[2].sub_total;
    }else if(jumlah_pesan == 3){
        total = struk_bayar[1].sub_total + struk_bayar[2].sub_total + struk_bayar[3].sub_total;
    }else if(jumlah_pesan == 4){
        total = struk_bayar[1].sub_total + struk_bayar[2].sub_total + struk_bayar[3].sub_total + struk_bayar[4].sub_total;
    }else if(jumlah_pesan == 5){
        total = struk_bayar[1].sub_total + struk_bayar[2].sub_total + struk_bayar[3].sub_total + struk_bayar[4].sub_total + struk_bayar[5].sub_total;
    }else if(jumlah_pesan == 6){
        total = struk_bayar[1].sub_total + struk_bayar[2].sub_total + struk_bayar[3].sub_total + struk_bayar[4].sub_total + struk_bayar[5].sub_total + struk_bayar[6].sub_total;
    }else if(jumlah_pesan == 7){
        total = struk_bayar[1].sub_total + struk_bayar[2].sub_total + struk_bayar[3].sub_total + struk_bayar[4].sub_total + struk_bayar[5].sub_total + struk_bayar[6].sub_total + struk_bayar[7].sub_total;
    }else if(jumlah_pesan == 8){
        total = struk_bayar[1].sub_total + struk_bayar[2].sub_total + struk_bayar[3].sub_total + struk_bayar[4].sub_total + struk_bayar[5].sub_total + struk_bayar[6].sub_total + struk_bayar[7].sub_total + struk_bayar[8].sub_total;
    }else if(jumlah_pesan == 9){
        total = struk_bayar[1].sub_total + struk_bayar[2].sub_total + struk_bayar[3].sub_total + struk_bayar[4].sub_total + struk_bayar[5].sub_total + struk_bayar[6].sub_total + struk_bayar[7].sub_total + struk_bayar[8].sub_total + struk_bayar[9].sub_total;
    }else if(jumlah_pesan == 10){
        total = struk_bayar[1].sub_total + struk_bayar[2].sub_total + struk_bayar[3].sub_total + struk_bayar[4].sub_total + struk_bayar[5].sub_total + struk_bayar[6].sub_total + struk_bayar[7].sub_total + struk_bayar[8].sub_total + struk_bayar[9].sub_total + struk_bayar[10].sub_total;
    }
    
    if ((total >= 100000) && (total < 150000)){
    diskon = 0.05 * total; 
    }else if ((total >= 150000) && (total < 250000)){
    diskon = 0.07 * total; 
    }else if (total >= 250000){
    diskon = 0.10 * total; 
    }else {
    diskon = 0;
    } 

    cout << endl;
    cout << "                Total       :   " << total <<endl;
    cout << "                Diskon      :   " << diskon <<endl;
    cout << "                Total bayar :   " << total - diskon <<endl;
    cout << "                Bayar       :   "; cin >> cash;
    cout << "                Kembali     :   " << cash - (total - diskon) <<endl;
    cout <<endl;

    cout << "-----------------------------------------" <<endl;
    cout << "     TERIMA KASIH ATAS KUNJUNGAN ANDA    " <<endl;
    cout << "       NIKMATI BELANJA HARGA MURAH       " <<endl;
    garis();

    return 0;
}