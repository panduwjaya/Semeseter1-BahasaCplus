#include <iostream>
#include <ctime>
using namespace std;

int main() {
    time_t now = time(0);
    char *wt = ctime(&now);


    int jmlh_pesanan, metode_pembayaran, operator, nomor pegawai;

    cout << "===============================================" << endl;
    cout << "=         SELAMAT DATANG DI TOKO BUKU          " << endl;
    cout << "=               GRAMEDIA LAMPUNG               " << endl;
    cout << "===============================================" << endl << endl;


    cout << "   DIBAWAH INI ADALAH LIST DAFTAR HARGA BUKU    " << endl;
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
    getline(cin,operator);
    cout << "MASUKAN NOMOR PEGAWAI : ";
    cin >> nomor_pegawai;
    cout << "=========================================" <<endl;

    //pesanan
    cout << "MASUKAN JUMLAH PESANAN : ";
    cin >> jmlh_pesanan;

    //jumlah pesanan
    for (i = 1; i <= jmlh_pesanan; i++){
        cout << "Masukkan Kode Barang " << i << " : ";
        cin >> struk_bayar[i].kode;
        reverse:
            if (struk_bayar[i].kode == "A1"){
                struk_bayar[i].nama_barang = "BUKU TULIS";
                struk_bayar[i].harga = 5000;

            }else if(struk_bayar[i].kode == "A2"){
                struk_bayar[i].nama_barang = "BUKU ANAK";
                struk_bayar[i].harga = 15000;

            }else if(struk_bayar[i].kode == "A3"){
                struk_bayar[i].nama_barang = "BUKU RELIGI";
                struk_bayar[i].harga = 35000;

            }else if(struk_bayar[i].kode == "A4"){
                struk_bayar[i].nama_barang = "BUKU FIKSI";
                struk_bayar[i].harga = 40000;

            }else if(struk_bayar[i].kode == "A5"){
                struk_bayar[i].nama_barang = "BUKU PELAJARAN";
                struk_bayar[i].harga = 80000;

            }else if(struk_bayar[i].kode == "A6"){
                struk_bayar[i].nama_barang = "KAMUS B.INGGRIS";
                struk_bayar[i].harga = 60000;

            }else if(struk_bayar[i].kode == "A7"){
                struk_bayar[i].nama_barang = "BUKU REFERENSI";
                struk_bayar[i].harga = 100000;

            }else if(struk_bayar[i].kode == "A8"){
                struk_bayar[i].nama_barang = "BUKU PSIKOLOGI";
                struk_bayar[i].harga = 150000;

            }else{
                goto reverse;
            }        
        cout << "Masukkan Jumlah Pembelian : ";
        cin >> struk_bayar[i].jumlah_beli;
    }
    system("cls");
        

    cout << "========================================= \n";
    cout << "|           TOKO BUKU GRAMEDIA          | \n";
    cout << "|          TANJUNG KARANG NO.09         | \n";
    cout << "========================================= \n\n";
    
    cout << " NO PEGAWAI : " << nomor_pegawai << endl;
    cout << " OPRATOR : " << operator << endl;
    cout << " TGL." << wt <<endl;
    cout << "=========================================" <<endl;
    
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
    diskon = (50 * total)/100; 
    }else if ((total >= 150000) && (total < 250000)){
    diskon = (70 * total)/100; 
    }else if (total >= 250000){
    diskon = 0.10 * total; 
    }else {
    diskon = 0;
    } 

    cout << endl;
    cout << "METODE PEMBAYARAN (CASH / KARTU KREDIT) : ";
    cin >> metode_pembayaran;
    cout << "Total       :   " << total <<endl;
    cout << "Total bayar :   " << total - diskon <<endl;
    cout << "Diskon      :   " << diskon <<endl;
    cout << "Bayar       :   "; 
    cin >> dibayar;
    cout << "Kembalian   :   " << dibayar - (total - diskon) <<endl;
    cout << endl;

    cout << "--------------------------------------" <<endl;
    cout << "     TERIMA KASIH TELAH BERBELANJA    " <<endl;
    cout << "      NIKMATI BELANJA HARGA MURAH     " <<endl;
    cout << "--------------------------------------" <<endl;

    garis();

    return 0;

}