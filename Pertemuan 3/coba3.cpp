#include <iostream>
#include <windows.h>

using namespace std;

struct mahasiswa{
    string npm;
    string nama;
    struct alamatMahasiswa{
        string kota, kecamatan;
        int kodePos;
    }alamat;
    float ipk;
}mhs;

/*
struct alamatMahasiswa{
    string kota, kecamatan;
    int kodePos;
};

struct mahasiswa{
    alamatMahasiswa alamat;
    string npm;
    string nama;
    float ipk;
}mhs;
*/

int main (){
   cout << "Input" << endl;
   cout << "Nama Mahasiswa      : ";
   cin  >> mhs.nama;
   cout << "NPM Mahasiswa       : ";
   cin  >> mhs.npm;
   cout << "Alamat Mahasiswa    : " << endl;
   cout << "  Kota              : ";
   cin  >> mhs.alamat.kota;
   cout << "  Kecamatan         : ";
   cin  >> mhs.alamat.kecamatan;
   cout << "  Kode Pos          : ";
   cin  >> mhs.alamat.kodePos;
   cout << "  IPK Mahasiswa     : ";
   cin  >> mhs.ipk;

   system ("cls");

   cout << endl << "Output" << endl;
   cout << "Nama Mahasiswa      : " << mhs.nama << endl;
   cout << "NPM Mahasiswa       : " << mhs.npm << endl;
   cout << "Alamat Mahasiswa    : " << endl;
   cout << "    Kota            : " << mhs.alamat.kota << endl;
   cout << "    Kecamatan       : " << mhs.alamat.kecamatan << endl;
   cout << "    Kode Pos        : " << mhs.alamat.kodePos << endl;
   cout << "IPK Mahasiswa       : " << mhs.ipk << endl;

   return 0;
}
