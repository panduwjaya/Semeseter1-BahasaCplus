#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    struct Mhs {
        string nama;
        string kelas;
        int npm;
    };
    string matakuliah[10] = {"Matkul PengLing","Matkul TekDig","Matkul PTI","Matkul ADP","Matkul Kalkulus","Matkul Indusper","Matkul PraktADP","Matkul PBI","Matkul Pend. Pancasila","Matkul PEK"};
    int NK[10], NTU[10], NQ[10], NU[10], NT[10], count[10];
    int total = 0;
    int total_akhir;

    Mhs mhs;
    cout << "Nama mahasiswa\t: ";cin >> mhs.nama;
    cout << "Kelas\t\t: ";cin >> mhs.kelas;
    cout << "NPM\t\t: ";cin >> mhs.npm;
    
    cout << "=========================================\n";

    for (int i = 0; i <= 9; i++){
        cout << "jenis matakuliah\t: " << matakuliah[i] << endl;
        cout << "nilai keaktifan\t: "; cin >> NK[i];
        if (0 >= NK[i] && NK[i] <= 85){
        }else {
            cout << "ulangi kembali" << endl;
        }

        cout << "nilai tugas\t: "; cin >> NTU[i];
        if (0 >= NTU[i] && NTU[i] <= 85){
        }else {
            cout << "ulangi kembali" << endl;
        }

        cout << "nilai quiz\t: "; cin >> NQ[i];
        if (0 >= NQ[i] && NQ[i] <= 85){
        }else {
            cout << "ulangi kembali" << endl;
        }

        cout << "nilai UTS\t: "; cin >> NU[i];
        if (0 >= NU[i] && NU[i] <= 85){
        }else {
            cout << "ulangi kembali" << endl;
        }

        cout << "nilai tugas\t: "; cin >> NT[i];
        if (0 >= NT[i] && NT[i] <= 85){
        }else {
            cout << "ulangi kembali" << endl;
        }

    }

    for (int i = 0; i <= 9; i++){
        count[i] =  (NK[i]*0.1 + NTU[i]*0.35 + NQ[i]*0.15 + NU[i]*0.20 + NT[i]*0.20);
        
    }
    
    for (int i = 0; i <= 9; i++){
        total = total + count[i];
    }

    total_akhir = total/10;

    if (76 >= total_akhir && total_akhir <= 85)
    {
        cout << "A" << " " << "ANGKA MUTU = A" << "LULUS" ;
    }
    else if (71 >= total_akhir && total_akhir < 76)
    {
        cout << "B+" << " " << "ANGKA MUTU = B+"<< "LULUS";
    }
    else if (66 >= total_akhir && total_akhir < 71)
    {
        cout << "B"  << " " << "ANGKA MUTU = B"<< "LULUS";
    }
    else if (61 >= total_akhir && total_akhir < 66)
    {
        cout << "C+" << " " << "ANGKA MUTU = C+" << "LULUS";
    }
    else if (55 >= total_akhir && total_akhir < 61)
    {
        cout << "C"   << " " << "ANGKA MUTU = C"<< "LULUS";
    }
    else if (50 >= total_akhir && total_akhir < 55)
    {
        cout << "D"   << " " << "ANGKA MUTU = D"<< "LULUS";
    }
    else if (total_akhir < 50)
    {
        cout << "E"   << " " << "TIDAK LULUS";
    }else {
        cout << "eror";
    }
    return 0;
}