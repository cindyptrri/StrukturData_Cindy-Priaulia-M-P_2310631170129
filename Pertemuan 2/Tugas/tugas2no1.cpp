#include <iostream>
#include <iomanip>
using namespace std;

// Digunakan untuk mendefinisikan jumlah hari dengan minimal 5 hari.
const int MIN_TANGGAL = 5;

struct DataBarang {
    string nama;
    int jumlah;
    int tanggal;
    int kode;
};

// Membuat fungsi'garis()' untuk mencetak garis horizontal menggunakan karakter '=' sebanyak 60 kali.
void garis(){
    for (int i = 0; i < 60; i++){
        cout << "=";
    }
}

int main(){
    // Mendeklarasi variabel jumlah data beserta tanggalnya
    int jumlahData;
    int tanggalTerakhir;

    cout << "Masukkan jumlah data yang ingin di input : ";
    cin  >> jumlahData;
    cout << "Masukkan tanggal terakhir : ";
    cin  >> tanggalTerakhir;

   DataBarang dataBarang[MIN_TANGGAL * jumlahData];

    // Menggunakan loop for untuk meminta pengguna untuk memasukkan nama barang sebanyak jumlah input.
    for (int i = 0; i < jumlahData; ++i){
        cout << "Masukkan nama barang ke-" << i+1 <<  " : ";
        cin >> dataBarang[i].nama;
    }
    cout << endl;

    for (int i = 0; i < tanggalTerakhir; ++i){
        cout << "Tanggal ke-: " << i+1 << endl;

        garis ();
        cout << endl;
    // Menggunakan looping untuk mengumpulkan jumlah barang pada setiap tanggal
    for (int j = 0; j < jumlahData; ++j){
        cout << "Masukkan jumlah " << dataBarang[j].nama << " tanggal " << i+1 << " : ";
        cin  >> dataBarang[j*tanggalTerakhir+i].jumlah;
        dataBarang[j*tanggalTerakhir+i].tanggal = i+1;

        cout << endl;
        }
    }
    garis();
    cout << endl;

    system ("cls");

    cout << "\t\t\tTabel data barang" << endl;
    garis();
    cout << endl;
    // Berguna untuk mencetak header dengan lebar kolom 7 karakter menggunakan 'setw'
    cout << setw(7) << "tanggal";

    // Menggunakan looping untuk mencatak nama barang
    for (int i = 0; i < jumlahData; i++){
        // Digunakan untuk mencetak setiap nama barang dengan lebar kolom 14 karakter
        cout << setw (14) << dataBarang[i].nama;
    }
    cout << endl;

    // Menggunakan looping untuk mencetak jumlah barang di setiap tanggalnya
    for (int i = 0; i < tanggalTerakhir; i++){
        cout << setw (4) << i+1;
        for (int j = 0; j < jumlahData; j++){
            cout << setw(14) << dataBarang[j*tanggalTerakhir+i].jumlah;
        }
        cout << endl;
    }

    garis();
    cout << endl;

    // Digunakan untuk mencari detail barang berdasarkan tanggal dan kode barang yang dimasukkan oleh pengguna
    while (true){
        // Mendeklarasikan variabel yang berguna untuk menyimpan  kode barang dan juga tanggal barang
        int kodeBarang;
        int tanggalBarang;

        cout << "\Masukkan tanggal dan kode barang untuk mencari detail barang" << endl;
        cout << "Masukkan tanggal       : ";
        cin  >> tanggalBarang;
        cout << "Masukkan kode barang   : ";
        cin  >> kodeBarang;

        garis();
    // Pengondisian untuk memeriksa apakah kode barang yang dimasukkan oleh pengguna valid.
    if (kodeBarang >= 0 && kodeBarang < jumlahData * tanggalTerakhir){
        cout << "\nDetail Barang";
        cout << "\nData Tanggal  : " << tanggalBarang;
        cout << "\nNama Barang   : " << dataBarang[kodeBarang].nama;
        cout << "\nAlamat Barang : " << &dataBarang[kodeBarang];
        cout << endl;

    garis();
    cout << endl;

    }
    else {
        cout << "Detail barang tidak ditemukan. Kode barang tidak valid." << endl;
    }
    // Mendeklarasikan variabel untuk meminta user memasukkan 'y' atau 'n'
    char jawaban;
        cout << "Apakah Anda ingin mencari detail barang lagi? (y/n): ";
        cin >> jawaban;

        if (jawaban != 'y' && jawaban != 'Y') {
            break;
        }

    }

  cout << "----------------------------------------" << endl;
  cout << "\nTerimakasih banyak :)" << endl;
  cout << "\nProgram ini dibuat oleh:" << endl;
  cout << "Nama   : Cindy Priaulia Maharani Putri" << endl;
  cout << "NPM    : 2310631170129" << endl;

  return 0;
}
