#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// Struct untuk merepresentasikan setiap film
struct Film {
    string title;
    string studio;
    string schedule;
    int price;
    Film* next;
};

// Fungsi untuk menambahkan film ke linked list
void addFilm(Film*& head, string title, string studio, string schedule, int price) {
    // Membuat film baru
    Film* newFilm = new Film;
    newFilm->title = title;
    newFilm->studio = studio;
    newFilm->schedule = schedule;
    newFilm->price = price;
    newFilm->next = nullptr;

    // Jika linked list masih kosong, maka film baru menjadi head
    if (head == nullptr) {
        head = newFilm;
    } else {
        // Jika tidak, cari elemen terakhir dan tambahkan film baru di belakang
        Film* current = head;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = newFilm;
    }
}

// Fungsi untuk menampilkan daftar film yang tersedia dalam format tabel
void displayFilms(Film* head) {
    cout << "==============================================================================================" << endl;
    cout << setw(3) << "No." << setw(25) << "Judul Film" << setw(23) << "Studio" << setw(15) << "Jam" << setw(24) << "Harga (Rp)" << endl;
    cout << "----------------------------------------------------------------------------------------------" << endl;

    // Menampilkan setiap film dalam daftar
    Film* current = head;
    int index = 1;
    while (current != nullptr) {
        cout << setw(2) << index << setw(30) << current->title << setw(20) << current->studio << setw(15)
        << current->schedule << setw(20) << current->price << endl;
        current = current->next;
        index++;
    }

    cout << "==============================================================================================" << endl;
}

int main() {
    Film* head = nullptr;

    // Menambahkan beberapa film ke linked list
    addFilm(head, "Spider-Man: No Way Home", "Studio 1", "14:15", 80000);
    addFilm(head, "Captain America: Civil War", "Studio 2", "15:30", 80000);
    addFilm(head, "Ant-Man and the Wasp", "Studio 1", "17:25", 80000);
    addFilm(head, "Guardians of the Galaxy", "Studio 3", "19:00", 80000);
    addFilm(head, "Thor: The Dark World", "Studio 2", "20:10", 80000);

    char choice;
    int filmIndex;
    string paymentMethod;

    // Menampilkan daftar film yang tersedia
    displayFilms(head);

    do {
        // Meminta user untuk memilih film
        cout << "\nMasukkan nomor judul film yang ingin ditonton: ";
        cin >> filmIndex;

        // Melakukan validasi nomor judul film yang dimasukkan user
        Film* current = head;
        int index = 1;
        while (current != nullptr && index != filmIndex) {
            current = current->next;
            index++;
        }

        if (current == nullptr) {
            cout << "Nomor film tidak valid. Silakan coba lagi." << endl;
            continue;
        }

        // Meminta user untuk memilih metode pembayaran
        cout << "Pilih metode pembayaran (Transfer Bank/Dana/Gopay/OVO): ";
        cin >> paymentMethod;

        // Menampilkan bill pembelian tiket
        cout << "\n\nBill Pembelian Tiket\n" << endl;
        cout << "------------------------------------" << endl;
        cout << "Judul Film         : " << current->title << endl;
        cout << "Studio             : " << current->studio << endl;
        cout << "Jam                : " << current->schedule << endl;
        cout << "Harga Tiket        : Rp. " << current->price << endl;
        cout << "Metode Pembayaran  : " << paymentMethod << endl;
        cout << "------------------------------------" << endl;

        // Meminta user apakah masih ingin memesan tiket
        cout << "\nApakah Anda masih ingin memesan tiket? (y/n): ";
        cin  >> choice;

        // Menutup program jika user tidak ingin memesan lagi
        if (choice != 'y' && choice != 'Y') {
            cout << "\nBaik, terimakasih banyak telah menggunakan program ini :)" << endl;
            cout << "\nProgram ini dibuat oleh:" << endl;
            cout << "Nama   : Cindy Priaulia Maharani Putri" << endl;
            cout << "NPM    : 2310631170129" << endl;
            cout << "\nHappy Watching Everyone!" << endl;
        }
    } while (choice == 'y' || choice == 'Y');

    return 0;
}
