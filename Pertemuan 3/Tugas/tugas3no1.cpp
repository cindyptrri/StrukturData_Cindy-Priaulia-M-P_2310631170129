#include <iostream>
#include <string>
using namespace std;

// Definisi 2 struct 'mahasiswa' dan juga 'nilai'
struct Mahasiswa {
    string npm;
    string nama;
};

struct Nilai {
    float absen;
    float tugas;
    float uts;
    float uas;
    float nilaiAkhir;
    char nilaiHuruf;
};

// mendeklarasikan variabel-variabel yang akan digunakan,
int main() {
    Mahasiswa mahasiswa[20];
    Nilai nilai[20];
    int jumlahMahasiswa = 0, menu, index, semua;
    string cariNpm;

    // do-while loop untuk membuat menu interaktif yang akan terus ditampilkan kepada pengguna
    // hingga pengguna memilih untuk keluar dari program.
    do {
        cout << "=============================" << endl;
        cout << "Menu Program Nilai Mahasiswa" << endl;
        cout << "=============================" << endl;
        cout << "1. Input Data Mahasiswa" << endl;
        cout << "2. Tampilkan Data Mahasiswa" << endl;
        cout << "3. Edit Data Mahasiswa" << endl;
        cout << "4. Hapus Data Mahasiswa" << endl;
        cout << "5. Keluar" << endl;
        cout << "=============================" << endl;
        cout << "Pilih menu (1-5): ";
        cin >> menu;
        cout << "=============================" << endl;

        //switch-case untuk menentukan tindakan yang akan diambil berdasarkan pilihan menu yang dipilih oleh pengguna.
        switch (menu) {
            case 1:
                cout << endl;
                cout << "=====================================" << endl;
                cout << "Masukkan jumlah mahasiswa (maks 20): ";
                cin >> jumlahMahasiswa;

                for (int i = 0; i < jumlahMahasiswa; i++) {
                    cout << "Data Mahasiswa ke-" << i + 1 << endl;
                    cout << "Nama           : ";
                    cin.ignore();
                    getline(cin, mahasiswa[i].nama);
                    cout << "NPM            : ";
                    cin >> mahasiswa[i].npm;
                    cout << "Nilai Absen    : ";
                    cin >> nilai[i].absen;
                    cout << "Nilai Tugas    : ";
                    cin >> nilai[i].tugas;
                    cout << "Nilai UTS      : ";
                    cin >> nilai[i].uts;
                    cout << "Nilai UAS      : ";
                    cin >> nilai[i].uas;

                    // Menghitung nilai akhir
                    nilai[i].nilaiAkhir = 0.1 * nilai[i].absen + 0.2 * nilai[i].tugas + 0.3 * nilai[i].uts + 0.4 * nilai[i].uas;

                    // Menghitung nilai huruf
                    if (nilai[i].nilaiAkhir > 80) {
                        nilai[i].nilaiHuruf = 'A';
                    } else if (nilai[i].nilaiAkhir > 70) {
                        nilai[i].nilaiHuruf = 'B';
                    } else if (nilai[i].nilaiAkhir > 60) {
                        nilai[i].nilaiHuruf = 'C';
                    } else {
                        nilai[i].nilaiHuruf = 'D';
                    }
                }
                break;

            case 2:
                if (jumlahMahasiswa == 0) {
                    cout << "Belum ada data mahasiswa." << endl;
                    break;
                }
                cout << endl;
                cout << "=================================" << endl;
                cout << "Menampilkan Data Mahasiswa" << endl;
                cout << "1. Menampilkan data yang di pilih" << endl;
                cout << "2. Menampilkan semua data  " << endl;
                cout << "=================================" << endl;
                cout << "Pilih data (1-2): ";
                cin >> semua;
                switch (semua) {
                    case 1:
                        cout << "Masukkan NPM Mahasiswa : ";
                        cin >> cariNpm;
                        cout << "Daftar Mahasiswa" << endl;
                        for (int i = 0; i < jumlahMahasiswa; i++) {
                            if (cariNpm == mahasiswa[i].npm) {
                                cout << "Data Mahasiswa ke-" << i + 1 << endl;
                                cout << "Nama           : " << mahasiswa[i].nama << endl;
                                cout << "NPM            : " << mahasiswa[i].npm << endl;
                                cout << "Nilai Absen    : " << nilai[i].absen << endl;
                                cout << "Nilai Tugas    : " << nilai[i].tugas << endl;
                                cout << "Nilai UTS      : " << nilai[i].uts << endl;
                                cout << "Nilai UAS      : " << nilai[i].uas << endl;
                                cout << "Nilai Akhir    : " << nilai[i].nilaiAkhir << endl;
                                cout << "Nilai Huruf    : " << nilai[i].nilaiHuruf << endl;
                            }
                        }
                        break;

                    case 2:
                        cout << "Daftar Mahasiswa" << endl;
                        for (int i = 0; i < jumlahMahasiswa; i++) {
                            cout << "Data Mahasiswa ke-" << i + 1 << endl;
                            cout << "Nama           : " << mahasiswa[i].nama << endl;
                            cout << "NPM            : " << mahasiswa[i].npm << endl;
                            cout << "Nilai Absen    : " << nilai[i].absen << endl;
                            cout << "Nilai Tugas    : " << nilai[i].tugas << endl;
                            cout << "Nilai UTS      : " << nilai[i].uts << endl;
                            cout << "Nilai UAS      : " << nilai[i].uas << endl;
                            cout << "Nilai Akhir    : " << nilai[i].nilaiAkhir << endl;
                            cout << "Nilai Huruf    : " << nilai[i].nilaiHuruf << endl;
                        }
                        break;
                }
                break;

            case 3:
                cout << "Masukkan NPM mahasiswa yang ingin diubah: ";
                cin >> cariNpm;

                index = -1;
                for (int i = 0; i < jumlahMahasiswa; i++) {
                    if (mahasiswa[i].npm == cariNpm) {
                        index = i;
                        break;
                    }
                }

                if (index == -1) {
                    cout << "Data mahasiswa dengan NPM " << cariNpm << " data yang anda masukkan tidak dapat ditemukan." << endl;
                } else {
                    cout << "Data Mahasiswa ke-" << index + 1 << endl;
                    cout << "Nama           : " << mahasiswa[index].nama << endl;
                    cout << "NPM            : " << mahasiswa[index].npm << endl;
                    cout << "Nilai Absen    : " << nilai[index].absen << endl;
                    cout << "Nilai Tugas    : " << nilai[index].tugas << endl;
                    cout << "Nilai UTS      : " << nilai[index].uts << endl;
                    cout << "Nilai UAS      : " << nilai[index].uas << endl;

                    cout << "Masukkan nilai baru: " << endl;
                    cout << "Nilai Absen : ";
                    cin  >> nilai[index].absen;
                    cout << "Nilai Tugas : ";
                    cin  >> nilai[index].tugas;
                    cout << "Nilai UTS   : ";
                    cin  >> nilai[index].uts;
                    cout << "Nilai UAS   : ";
                    cin  >> nilai[index].uas;

    // Digunakan untuk membuat tampilan layar menjadi lebih enak dilihat dan tidak ppusing dengan banyaknya kata
    system ("cls");

                    // Menghitung nilai akhir
                    nilai[index].nilaiAkhir = 0.1 * nilai[index].absen + 0.2 * nilai[index].tugas + 0.3 * nilai[index].uts + 0.4 * nilai[index].uas;

                    // Menghitung nilai huruf
                    if (nilai[index].nilaiAkhir > 80) {
                        nilai[index].nilaiHuruf = 'A';
                    } else if (nilai[index].nilaiAkhir > 70) {
                        nilai[index].nilaiHuruf = 'B';
                    } else if (nilai[index].nilaiAkhir > 60) {
                        nilai[index].nilaiHuruf = 'C';
                    } else {
                        nilai[index].nilaiHuruf = 'D';
                    }

                    cout << "Data yang anda masukkan berhasil diubah." << endl;
                }
                break;

            case 4:
                cout << "Masukkan NPM mahasiswa yang ingin dihapus: ";
                cin >> cariNpm;

                index = -1;
                for (int i = 0; i < jumlahMahasiswa; i++) {
                    if (mahasiswa[i].npm == cariNpm) {
                        index = i;
                        break;
                    }
                }

                if (index == -1) {
                    cout << "Data mahasiswa dengan NPM " << cariNpm << " Data yang anda masukkan tidak dapat ditemukan! Silahkan coba lagi" << endl;
                } else {
                    for (int i = index; i < jumlahMahasiswa - 1; i++) {
                        mahasiswa[i] = mahasiswa[i + 1];
                        nilai[i] = nilai[i + 1];
                    }

                    jumlahMahasiswa--;

                    cout << "Data berhasil dihapus";
                    cout << endl;
                }
                break;

            default:
                // Identitas pembuat program
                cout << "----------------------------------------" << endl;
                cout << "\nProgram ini dibuat oleh:" << endl;
                cout << "Nama   : Cindy Priaulia Maharani Putri" << endl;
                cout << "NPM    : 2310631170129" << endl;
                cout << "\nTerimakasih banyak sudah nenggunakan program ini :)" << endl;
                break;
        }

    } while (menu != 5);
    return 0;
}
