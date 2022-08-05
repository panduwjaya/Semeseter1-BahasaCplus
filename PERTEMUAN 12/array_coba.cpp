#include <iostream>
using namespace std;

double calcNilai(double NA, double NTU, double NQ, double NTS, double NAS);
string convHuruf(double NAK);
double convAngka(double NAK);
int main (){
	string matakuliah[10] = {"Matkul PengLing","Matkul TekDig","Matkul PTI","Matkul ADP","Matkul Kalkulus","Matkul Indusper","Matkul PraktADP","Matkul PBI","Matkul Pend. Pancasila","Matkul PEK"};
	double NA[10], NTU[10], NQ[10], NTS[10], NAS[10], NAK[10], akm[10], totalAM;
	string hrf[10];
	int i, j;
	
	for (i=0; i<9; i++) {
	cout << matakuliah[i] << endl;
	cout << "Masukkan nilai" << endl;
	cout << "Nilai Keaktifan: "; cin >> NA[i];
	cout << "Nilai Tugas: "; cin >> NTU[i];
	cout << "Nilai Kuis: "; cin >> NQ[i];
	cout << "Nilai UTS: "; cin >> NTS[i];
	cout << "Nilai UAS: "; cin >> NAS[i];

	NAK[i] = calcNilai(NA[i], NTU[i], NQ[i], NTS[i], NAS[i]);
	cout << "Nilai akhir: " << NAK[i] << endl;
	hrf[i] = convHuruf(NAK[i]);
	cout << "Huruf Mutu: " << hrf[i] << endl;
	akm[i] = convAngka(NAK[i]);
	cout << "Angka Mutu: " << akm[i] << endl;
			
		}
	
	
	return 0;
}

double calcNilai(double NA, double NTU, double NQ, double NTS, double NAS){
	double NAK = 0.0;
	NAK = (NA*0.1)+(NTU*0.35)+(NQ*0.15)+(NTS*0.2)+(NAS*0.2);
	
	return NAK;
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
