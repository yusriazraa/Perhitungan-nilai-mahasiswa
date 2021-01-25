#include <iostream>
#include <stdlib.h>
#include <iomanip>

using namespace std;

int main()
{
      //deklarasi
      const char nama[35]    = "Yusri Azra Lazwardi";
      const char kelas[5]    = "1B";
      const char program[40] = "Hotel-Hotelan";
      char namaPemesan[35], ulangi;
      char kode;
      int total_bayar,harga;
      short int lama_inap,maxData,i;
      string kode_Kamar;

      //Inisialisasi awal WHILE
      i=1;
      ulangi ='y' ;

      while (ulangi == 'Y' || ulangi == 'y')
{     system("cls");

    //pengenalan program
    cout<<"=================================================="<<endl;
    cout<<"="<<ends<<"Nama     : "<<ends<<nama<<setw(17)<<"="<<endl;
    cout<<"="<<ends<<"Kelas    : "<<ends<<kelas<<setw(34)<<"="<<endl;
    cout<<"="<<ends<<"Program  : "<<ends<<program<<setw(23)<<"="<<endl;
    cout<<"=================================================="<<endl;
    cout<<"\n"<<endl;

    cout<<"Input Data Ke - "<<i<<endl;
    cout<<"Data Pemesan        : "; cin>>namaPemesan;
    cout<<"Kode Kamar [S/D/P]  : "; cin>>kode;

    switch (kode) {
        case 'S':
            kode_Kamar = "Sweet Room";
            harga = 350000;
            break;
        case 'D':
            kode_Kamar = "Deluxe Room";
            harga = 600000;
            break;
        case 'P':
            kode_Kamar = "President Room";
            harga = 885000;
            break;
        default:
            kode_Kamar = "Salah Input Kode";
            break;

    }

    cout<<"Lama Inap           : "; cin>>lama_inap;
    total_bayar = lama_inap*harga;

    cout<<"\n"<<endl;
    cin.ignore();
    cout<<"Tekan Sembarang Tombol. . . ."<<endl;

    cout<<"\n"<<endl;
    cout<<"*****"<<ends<<"HORIZON HOTEL-HOTELAN"<<endl;
    cout<<"Nama Pemesan             : "<<ends<<namaPemesan<<endl;
    cout<<"Pilihan Kamar            : "<<ends<<kode_Kamar<<endl;
    cout<<"Harga Kamar / Malam      : "<<ends<<"Rp."<<harga<<endl;
    cout<<"Lama inap                : "<<ends<<lama_inap<<" hari"<<endl;
    cout<<"\n"<<endl;
    cout<<"Total Pembayaran         : "<<ends<<"Rp."<<total_bayar<<endl;

    cout<<"\n"<<endl;
    cout<<". . . Terima Kasih . . ."<<endl;
    cout<<"\n"<<endl;

    cout<<"Ulangi Program Dari Awal ? [Y/T] ? = "; cin>> ulangi;
    i++;
}
 //akhir dari WHILE


    cout<<"\n"<<endl;
    cout<<". . . Terima Kasih . . ."<<endl;

    //Credit by : Yusri
    system("cls");
	cout << endl << endl;
	cout << "===============================================================================" << endl;
	cout << "PROGRAM DIBUAT OLEH : " << endl << endl;

	cout << "NAMA       : Yusri Azra Lazwardi " << endl;
	cout << "NPM        : 432007006200083 " << endl;
	cout << "KELAS      : 1B" << endl << endl;

	cout << "Tugas      : Latihan 8.2 " << endl;
	cout << "===============================================================================" << endl;
	cout << "* \t\t\t\t TERIMA KASIH" << setw(34) << "*" << endl;
	cout << "* \t\t\t\t     ***" << setw(39) << "*" << endl;
	cout << "===============================================================================" << endl;

    return 0;
     }

