#include <iostream>
#include <iomanip>

using namespace std;

string convHuruf(double NAK);
string keterangan(double NAK);
double convAngka(double NAK);
void convAkhir(int ipk);

int main(){
    struct Mahasiswa {
        string nama;
        string kelas;
        int npm;
    };
    string matakuliah[10] = {"Matkul PengLing","Matkul TekDig","Matkul PTI","Matkul ADP","Matkul Kalkulus","Matkul Indusper","Matkul PraktADP","Matkul PBI","Matkul Pend. Pancasila","Matkul PEK"};
    float NK[10], NTU[10], NQ[10], NU[10], NUAS[10];
    float count[10]; 
    double angka_mutu[10];
    string huruf_mutu[10], keterangan_mutu[10];
    int total = 0;
    int total_akhir;

    Mahasiswa mhs;
    cout << "Nama mahasiswa\t: ";getline(cin, mhs.nama);
    cout << "Kelas\t\t: ";getline(cin, mhs.kelas);
    cout << "NPM\t\t: ";cin >> mhs.npm;
    
    cout << "=========================================\n";

    for (int i = 0; i <= 9; i++){
        cout << "jenis matakuliah\t: " << matakuliah[i] << endl;
        cout << "Nilai Keaktifan\t: "; cin >> NK[i];
        cout << "Nilai Tugas\t: "; cin >> NTU[i];
        cout << "Nilai Kuis\t: "; cin >> NQ[i];
        cout << "Nilai UTS\t: "; cin >> NU[i];
        cout << "Nilai UAS\t: "; cin >> NUAS[i];

    }

    for (int i = 0; i <= 9; i++){
        count[i] =  (NK[i]*0.1 + NTU[i]*0.35 + NQ[i]*0.15 + NU[i]*0.20 + NUAS[i]*0.20);
        cout << "Nilai akhir: " << count[i] << endl;
        huruf_mutu[i] = convHuruf(count[i]);
        cout << "Huruf Mutu: " << huruf_mutu[i] << endl;
        angka_mutu[i] = convAngka(count[i]);
        cout << "Angka Mutu: " << angka_mutu[i] << endl;
        keterangan_mutu[i] = keterangan(count[i]);
        cout << "keterangan: " << keterangan_mutu[i] << endl;
    }

    for (int i = 0; i <= 9; i++){
        total = total + angka_mutu[i];
    }  
    
    double hasil_akhir = total;
    cout << "IPK DARI MAHASISWA BERNAMA " << mhs.nama << " ADALAH\t:";
    convAkhir(hasil_akhir);

    return 0;
}

void convAkhir(int ipk){
    cout << ipk/10.0;
}

string convHuruf(double NAK) {
	string convHuruf;
	if (NAK >= 76 && NAK <= 85) {
		convHuruf = "A";
	} else if (NAK >= 71 && NAK <= 75.9) {
		convHuruf = "B+"; 
	} else if (NAK >= 66 && NAK <= 70.9) {
		convHuruf = "B"; 
	} else if (NAK >= 61 && NAK <= 65.9) {
		convHuruf = "C+";
	} else if (NAK >= 55 && NAK <= 60.9) {
		convHuruf = "C"; 
	} else if (NAK >= 50 && NAK <= 54.9) {
		convHuruf = "D"; 
	} else if (NAK>= 0 && NAK < 50) {
		convHuruf = "E"; 
	} else {
		cout << "Error";
	}
	
	return convHuruf;
}

string keterangan(double NAK) {
	string keterangan;
	if (NAK >= 76 && NAK <= 85) {
		keterangan = "LULUS";
	} else if (NAK >= 71 && NAK <= 75.9) {
		keterangan = "LULUS"; 
	} else if (NAK >= 66 && NAK <= 70.9) {
		keterangan = "LULUS"; 
	} else if (NAK >= 61 && NAK <= 65.9) {
		keterangan = "LULUS";
	} else if (NAK >= 55 && NAK <= 60.9) {
		keterangan = "LULUS"; 
	} else if (NAK >= 50 && NAK <= 54.9) {
		keterangan = "LULUS"; 
	} else if (NAK>= 0 && NAK < 50) {
		keterangan = "TIDAK LULUS"; 
	} else {
		cout << "Error";
	}
	
	return keterangan;
}

double convAngka(double NAK) {
	double convAngka;
	if (NAK >= 76 && NAK <= 85) {
		convAngka = 4;
	} else if (NAK >= 71 && NAK <= 75.9) {
		convAngka = 3.5; 
	} else if (NAK >= 66 && NAK <= 70.9) {
		convAngka = 3; 
	} else if (NAK >= 61 && NAK <= 65.9) {
		convAngka = 2.5;
	} else if (NAK >= 55 && NAK <= 60.9) {
		convAngka = 2; 
	} else if (NAK >= 50 && NAK <= 54.9) {
		convAngka = 1; 
	} else if (NAK < 50) {
		convAngka = 0; 
	} else {
		cout << "Error";
	}
	
	return convAngka;
}