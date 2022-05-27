#include <conio.h>
#include <iostream>
#include <stdio.h>
using namespace std;
int main() 
{
	
int lama,harga=0,jum,diskon=0,total;
char nama[15],kode,*jenis, mengulang;

cout<<"--------------------------------------------"<<endl;	
cout<<"SELAMAT DATANG DI PROGRAM RUMAH SAKIT TPB 36"<<endl;
cout<<"--------------------------------------------"<<endl;
cout<<"TPB 36 - Petugas Yang Berjaga : "<<endl;
cout<<"--------------------------------"<<endl;
cout<<"Celina Fadila Rahmadini............121260047"<<endl;
cout<<"Ezra Gabriella Oktaviany N.........121260091"<<endl;
cout<<"Sekar Ayu Zhafira..................121260092"<<endl;
cout<<"============================================"<<endl;
cout<<endl;
	
do {
cout<<"Masukan Nama Pasien = ";cin>>nama;
cout<<"Jenis Perawatan :"<<endl;
cout<<"A. Rawat Inap"<<endl;
cout<<"B. Rawat Jalan"<<endl;
cout<<"Masukan Jenis Perawatan (A/B) = ";cin>>kode;
cout<<"Lama Perawatan = ";cin>>lama;
cout<<"==========================================="<<endl;
cout<<"-----------INFORMASI DATA PASIEN-----------"<<endl;
cout<<"==========================================="<<endl;

    	cout<<"Nama Pasien    = "<<nama<<endl<<endl;
		cout<<"Kode Kamar     = "<<kode<<endl<<endl;

      if (kode=='A'||kode=='a')
		jenis="Spesialis";

      else if (kode=='b'||kode=='B')
		jenis="Umum";

      else
		jenis="Maaf Dokter Sedang Libur";
		
		cout<<"Jenis Dokter   = "<<jenis<<endl<<endl;
		cout<<"Lama Perawatan = "<<lama<<endl<<endl;

      if (kode=='A'||kode=='a')
       	harga=250000;

      else if (kode=='b'||kode=='B')
    	harga=300000;
    	
    	jum=harga*lama;
    	cout<<"Jumlah Bayar   = "<<jum<<endl<<endl;

      if (lama>=7)
		diskon=0.2*jum;

      else
       	diskon=0;
       	
    	cout<<"Diskon         = "<<diskon<<endl<<endl;	
		total=jum-diskon;
    	cout<<"Total Bayar    = "<<total<<endl<<endl;
    	cout<<"======================================="<<endl;
      
	cout<<"Apakah Anda Ingin Mengisi Ulang Data?"<<endl;
	cout<<"Isikan y (Mengulang) atau t (Selesai) : ";cin>>mengulang;
	cout<<"========================================="<<endl;

	}
	while (mengulang=='y');
	cout<<"Data anda telah disimpan, semoga lekas sembuh ya.."<<endl;

}
