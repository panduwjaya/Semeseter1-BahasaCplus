//Tuliskan ke layar apakah matriks ini adalah matriks satuan atau bukan
//Matriks satuan adalah matriks yang elemennya hanyalah 0 atau 1 Jika ada elemen dengan nilai lain,berarti bukan satuan
#include<iostream>
using namespace std;

int main(){
    //KAMUS
    //mendeklarasikan jumlah maksimum yang dapat dipakai adalah pada matriks 10x10
    int Mmax[10][10];
    //adalah sebagai acuan baris dan kolom efektif yang dapat dipakai
    int Nbrs, Nkol;
    //variabel yang menentukan apakah matriks satuan atau bukan
    bool bknsatuan;

    //ALGORITMA
    //opening
    cout<<"SILAKAN UNTUK DAPAT MEMASUKAN BARIS DAN KOLOM EFEKTIF DI BAWAH INI"<<endl<<endl;
    //input angka dari pengguna/user
    cout<<"masukan baris: ";
    cin >> Nbrs;
    cout << "masukan kolom: ";
    cin >> Nkol;

    //mengisi elemen matriks
    for (int a = 0; a < Nbrs; a++){
        for (int b = 0; b < Nkol; b++){
            cout <<"[" << a << ", " << b << "] = ";
            cin >> Mmax[a][b];
        }
    }
    cout << endl;

    //output martriks
    for (int a = 0; a < Nbrs; a++){
        for (int b = 0; b < Nkol; b++){
            cout << Mmax[a][b] << " ";
        }
        cout << endl;
    }
    cout << endl;

    bknsatuan = false;
    //mencari nilai selain 0 dan 1
    for (int a = 0; a < Nbrs; a++){
        for (int b = 0; b < Nkol; b++){
            if (Nkol == Nbrs){
                //apakah isi dari elemen yang di input user adalah angka  0 atau  1
                if (Mmax[a][b] == 0 || Mmax[a][b] == 1){
                    bknsatuan = false;
                }else{
                    bknsatuan = true;
                }
            }else{
                bknsatuan = true;
            }
        }
    }
    
    //output yang menampilkan bahwa ini merupakan matriks satuan
    if (bknsatuan == false){
        cout << "Matriks adalah matriks satuan";
    }
    //jika bernilai true maka ini bukan matriks satuan
    else{
        cout << "Matriks bukan matriks satuan";
    }
    return 0;

}