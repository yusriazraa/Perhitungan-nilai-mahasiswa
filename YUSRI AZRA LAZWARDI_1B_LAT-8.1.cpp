#include <iostream>
#include <stdlib.h>
#include <iomanip>

#define th "2020"
#define kampus "STMIK TASIKMALAYA"

using namespace std;

int main()
{
    const char matkul [20] = "Dasar Pemrograman";
    char nama[50],noKontak[20],
         kelas [4], Nomorpokok [50], ulangi, garis;

    float nilai, tugas, uas;
    string grade, keterangan;
    short int Nilai_Akhir, kode, i, MaxData;
    string jurusan;



    //cara pengulangan
    i=1;
    ulangi = 'y' ;

    while (ulangi == 'Y' || ulangi == 'y')


{
    system("cls");
    cout<<"+++ PROGRAM HITUNG NILAI MAHASISWA +++"<<endl;
    cout<<"======================================"<<endl;
    cout<<"Oleh Yusri Azra Lazwardi"<<endl;
    cout<<"kelas : 1B"<<endl;
    cout<<"======================================"<<endl;
    cout<<endl;
    //Peroses Penginputan data
    cout<<"Input Banyak Data : "; cin>>MaxData;

    for(i=1; i<=MaxData; i++) {
    cout<<endl;
    cout<<"Data ke - "<<i<<endl;
    cin.ignore();

    cout<<"Input Nama Lengkap   :" <<ends;
    cin.getline(nama,50);
    cout<<"Input NPM            :" <<ends;
    cin.getline(Nomorpokok,50);
    cout<<"Kelas                :" <<ends;
    cin.getline(kelas,4);
    cout<<"no. Kontak           :" <<ends;
    cin.getline(noKontak,20);
    cout<<"ID Jurusan [1-4]     :" <<ends;
    cin>>kode;
    switch (kode){
        case 1:
            jurusan = "D3-Komputer Akuntansi";
            break;
        case 2:
            jurusan = "D3-TKJ";
            break;
        case 3:
            jurusan = "S1-Sisitem Informatika";
            break;
        case 4:
            jurusan = "S1-teknik informatika";
            break;
        default :
            cout<<"Tidak Ada Jursan";
            break;
    }


    cout<<"\n"<<endl;

    cout<<"Nilai Kehadiran      :" <<ends;
    cin>>nilai;
    cout<<"Projek Tugas         :" <<ends;
    cin>>tugas;
    cout<<"Hasil UAS            :" <<ends;
    cin>>uas;
    cout<<endl;
    cout<<" Tekan Tombol Enter ... ";


    cout<<endl<<endl;
    cout<<"======================================================\n";
    cout<<"\t      PROGRAM BIODATA"<<endl;
    cout<<"======================================================\n";

    cout<<"NPM         : " <<ends<<Nomorpokok<<endl;
    cout<<"Nama        : " <<ends<<nama<<endl;
    cout<<"Kelas       : " <<ends<<kelas<<endl;
    cout<<"Jurusan     : " <<ends<<jurusan<<endl;
    cout<<"No. Kontak  : " <<ends<<noKontak<<endl;
    cout<<"Mata Kuliah : " <<ends<<matkul<<endl;
    cout<<"******************************************************"<<endl;
    cout<<"\t Nilai Kehadiran : " <<ends<<nilai<<endl;
    cout<<"\t Projek Tugas    : " <<ends<<tugas<<endl;
    cout<<"\t Hasil UAS       : " <<ends<<uas<<endl;

     Nilai_Akhir = 0.3*nilai+0.3*tugas+0.4*uas;

    if(Nilai_Akhir >=80){
        keterangan = "LULUS";
        grade = "A";
    }else if(Nilai_Akhir >= 75){
        keterangan = "LULUS";
        grade = "B";
    }else if(Nilai_Akhir >= 65){
        keterangan = "LULUS";
        grade = "C";
    }else if(Nilai_Akhir < 65){
        keterangan = "TIDAK LULUS";
        grade = "E";
    }

    if(Nilai_Akhir >= 65){
            cout <<"Nilai Akhir :"<<ends<<Nilai_Akhir<<endl;
            cout <<"SELAMAT ANDA"
                 <<ends
                 <<keterangan
                 <<endl;
            cout << "Dengan Mendapat Grade :"
                 <<ends
                 <<grade
                 <<endl;
    }else{
        cout <<"Nilai Akhir :"<<ends<<Nilai_Akhir<<endl;
        cout <<"MOHON MAAF ANDA"
             <<ends
             <<keterangan
             <<endl;
        cout << "Dengan Mendapat Grade :"
            <<ends
            <<grade
            <<endl;
    }
    cout<<"\n"<<endl;
    }
    cout<<"Ulangi Program Dari Awal? [Y/N] ? ="; cin >> ulangi;
    i++;
}

    cout<<"******************************************************"<<endl;
    cout<<"\t " << kampus<<endl;
    cout<<"\t \t "<<th<<endl;
    cout<<"******************************************************"<<endl;
    cout<<" Tekan Tombol Enter ... ";
	system("cls");

	cout << endl << endl;
	cout << "===============================================================================" << endl;
	cout << "PROGRAM DIBUAT OLEH : " << endl << endl;

	cout << "NAMA       : Yusri Azra Lazwardi " << endl;
	cout << "NPM        : 432007006200083 " << endl;
	cout << "KELAS      : 1B" << endl << endl;

	cout << "Tugas      : Latihan 8.1 " << endl;
	cout << "===============================================================================" << endl;
	cout << "* \t\t\t\t TERIMA KASIH" << setw(34) << "*" << endl;
	cout << "* \t\t\t\t     ***" << setw(39) << "*" << endl;
	cout << "===============================================================================" << endl;

return 0;
     }

