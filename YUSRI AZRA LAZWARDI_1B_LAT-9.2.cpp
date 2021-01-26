#include <iostream>
#include <stdlib.h>
#include <iomanip>

using namespace std;

int main()
{
       //step1. Rubah semua tipe data yg dibutuhkan menjadi bertipe Array
      // string itu sudah mewakili char [ ];
      //char pembeli[50];
      //deklarasi
      const char nama [35]    = "Yusri Azra Lazwardi";
      const char kelas [5]    = "1B";
      const char program [40] = "Hotel-Hotelan";
      char ulangi;
      char kode [14];
      int total_bayar [14], harga [14], lama_inap[14] ,i;
      string namaPemesan[14], kode_Kamar [14];

      //step2. tentukan inisialisasinya dari NOL
      //Inisialisasi awal WHILE
      i=0;              //inisialisasi
      ulangi ='y' ;     //inisialisasi

      //step3. Rubah semua format isiannya sesuai tipe datanya
 	 //jika Array maka harus ditambahkan [ ]

      while (ulangi == 'Y' || ulangi == 'y') {


    //pengenalan program
    system("cls");
    cout<<"=================================================="<<endl;
    cout<<"="<<ends<<"Nama     : "<<ends<<nama<<setw(17)<<"="<<endl;
    cout<<"="<<ends<<"Kelas    : "<<ends<<kelas<<setw(34)<<"="<<endl;
    cout<<"="<<ends<<"Program  : "<<ends<<program<<setw(23)<<"="<<endl;
    cout<<"=================================================="<<endl;
    cout<<"\n"<<endl;

    cout<<"Input Data Ke - "<<i+1<<endl;
    cout<<"Data Pemesan        : "; cin>>namaPemesan [i];
    cout<<"Kode Kamar [S/D/P]  : "; cin>>kode [i];

    switch (kode [i]) {
        case 'S':
            kode_Kamar [i] = "Sweet Room";
            harga [i] = 350000;
            break;
        case 'D':
            kode_Kamar [i] = "Deluxe Room";
            harga [i] = 600000;
            break;
        case 'P':
            kode_Kamar [i] = "President Room";
            harga [i] = 885000;
            break;
        default:
            kode_Kamar [i] = "Salah Input Kode";
            harga [i] = 0;
            break;

    }

    cout<<"Lama Inap           : "; cin>>lama_inap [i];
    total_bayar [i] = lama_inap [i] *harga[i];

    //step4. tentukan posisi akhir pengulangan WHILE / DO WHILE

    cout<<"Ulangi Program Dari Awal ? [Y/T] ? = "; cin>> ulangi;
    i++;
    cout<<"Tekan Sembarang Tombol. . . ."<<endl;
    cin.get();
    system("cls");
    }//akhir dari WHILE

    //step5. mambuat Output Array
    cout<<"*****"<<ends<<"HORIZON HOTEL-HOTELAN"<<endl;
    cout<<"=================================================="<<endl;
    for (int x=0; x<i; x++) { // For Awal
    cout << endl;
    cout << "Data Ke - " << x+1 << endl;
    cout<<"Nama Pemesan             : "<<ends<<namaPemesan [x]<<endl;
    cout<<"Pilihan Kamar            : "<<ends<<kode_Kamar [x]<<endl;
    cout<<"Harga Kamar / Malam      : "<<ends<<"Rp."<<harga [x]<<endl;
    cout<<"Lama inap                : "<<ends<<lama_inap [x]<<" hari"<<endl;
    cout<<"\n"<<endl;
    cout<<"Total Pembayaran         : "<<ends<<"Rp."<<total_bayar [x]<<endl;
    cout<<"=================================================="<<endl;
    } // For Akhir

    //step untuk mencetak laporan
      cout << endl << endl;
    cout << "Tekan Sembarang Tombol ... ";
    cin.get();
    system ("cls");
    cout <<"===========================================================================\n";
    cout <<"                          LAPORAN TRANSAKSI                                \n";
    cout <<"                          SEWA HOTEL-HOTELAN		                       \n";
    cout <<"===========================================================================\n";
    cout <<"|" << " No";
    cout <<" |" << setiosflags(ios::left) << setw(16) << " Pemesan";
    cout <<" |" << setiosflags(ios::left) << setw(6) << " Kode";
    cout <<" |" << setiosflags(ios::left) << setw(17) << " Nama Kamar";
    cout <<" |" << setiosflags(ios::left) << setw(6) << " Harga";
    cout <<" |" << setiosflags(ios::left) << setw(4) << " Lama";
    cout <<" |" << setiosflags(ios::left) << setw(7) << " Total";
    cout <<" |" << endl;
    cout <<"===========================================================================\n";
    for ( int x=0; x<i; x++ ) {
    cout <<"|" << setw (3) <<x+1;
    cout <<" | " << setw(15) << namaPemesan[x];
    cout <<" | " << setw(5)  << kode[x];
    cout <<" | " << setw(16) << kode_Kamar[x];
    cout <<" | " << setw(5)  << harga[x];
    cout <<" | " << setw(3)  << lama_inap [x];
    cout <<" | " << setw(4)  << total_bayar [x];
    cout <<" | " << endl;

  } //akhir dari FOR Laporan Nilai Mahasiswa
    cout << "==========================================================================\n" << endl;
    cout <<"                                ...TERIMA KASIH...                          " << endl;


    //Credit by : Yusri

	//=================================
	//=====PROGRAM DIBUAT OLEH=====

	//NAMA       : Yusri Azra Lazwardi
	//NPM        : 432007006200083
	//KELAS      : 1B

	//Tugas      : Latihan 9.2
	//=================================
	//=====STMIK TASIKMALAYA=====
	//      =====2021=====
	//=================================
    return 0;
     }
