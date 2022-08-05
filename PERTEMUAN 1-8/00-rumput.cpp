#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main (){
	const float phi = 3.14;
	const float phi2 = 22/7;
	float rumus11;
	float rumus12;
	int upah=5000;
	int jari;
	int a,b,c,d;
	
	
	cout<<"========================================="<<endl;
	cout<<"=     ALGORITMA UNTUK MENCARI UPAH      ="<<endl;
	cout<<"=            PEMOTONG RUMPUT            ="<<endl;
	cout<<"========================================="<<endl;
	
	cout<<"LINGKARAN"<<endl;
	cout<<"masukan nilai jari-jari lingkaran = ";cin>>jari;
	cout<<endl;
	if(jari >= 0,jari % 7 == 0 ){
		rumus11=phi*jari*jari;
		cout<<"hasil kelipatan 7 = "<<rumus11<<endl;
	}else if(jari >= 0,jari != jari%7 == 0){
		rumus12=phi2*jari*jari;
		cout<<"hasil bukan kelipatan 7 = "<<rumus12<<endl;
	}
	
	cout<<"SEGITIGA"<<endl;
	cout<<"masukan tinggi segitiga = ";cin>>c;
	cout<<endl<<endl;
	cout<<"masukan lebar segitiga = ";cin>>d;
	cout<<endl<<endl;
	int rumus3=c*d;
	int rumus31=rumus3/2;
	cout<<"hasil = "<<rumus31<<endl;
	
	cout<<"PERSEGI"<<endl;
	cout<<"masukan panjang persegi = ";cin>>a;
	cout<<endl<<endl;
	cout<<"masukan lebar persegi = ";
	cin>>b;
	cout<<endl<<endl;
	int rumus2=a*b;
	cout<<"hasil = "<<rumus2<<endl;

	
	//rumus dari = (L rumput=L persegi panjang-L lingkaran-L segitiga)
	
	if(jari >= 0,jari % 7 == 0 ){
		float total11 = rumus2-(rumus11+rumus31);
		float total12 = total11*5000;
		
		cout<<"KELIPATAN 7 = "<<total12<<endl;
		cout<<"JADI UPAH YANG DI DAPAT PAK MUSTOFA ADALAH = "<<"Rp."<<total12<<endl;
	}else if(jari >= 0,jari != jari%7 == 0){
		float total21 = rumus2-(rumus12+rumus31);
		float total22 = total21*5000;
		
		cout<<"BUKAN KELIPATAN 7 = "<<total21<<endl;
		cout<<"JADI UPAH YANG DI DAPAT PAK MUSTOFA ADALAH = "<<"Rp."<<total22<<endl;
	}
	
	
	
	cin.get();
	return 0;
}