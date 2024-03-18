#include <iostream>
using namespace std;

// Definisi dari sebuah struktur bernama 'Node' yang memiliki dua anggota yaitu 'data' dan 'next'
struct Node {
    int data;
    Node* next;
};

// Deklarasi Variabel 'angka' yang akan digunakan untuk menyimpan jumlah angka yang akan dimasukkan oleh pengguna ke dalam linked list.
int main() {
    // Menggunakan nullptr untuk inisialisasi pointer
    Node* head = nullptr;
    int angka;

    system("cls");

    // Digunakan untuk meminta user agar memasukkan jumlah angkanya
    cout << "Input Data" << endl;
    cout << "Masukkan jumlah angka: ";
    cin  >> angka;

    // Digunakan untuk meminta user agar memasukkan sejumlah angka ke dalam linked list
    for (int i = 1; i <= angka; i++) {
        int data;
        cout << "Masukkan angka ke-" << i << ": ";
        cin >> data;

        // Setiap kali pengguna memasukkan sebuah angka, sebuah Node baru dibuat dengan menggunakan operator 'new'.
        // Nilai angka yang dimasukkan oleh pengguna disimpan di dalam 'newNode->data'.
        Node* newNode = new Node;
        newNode -> data = data;
        // Menggunakan nullptr untuk inisialisasi pointer
        newNode -> next = nullptr;

        // if dilakukan pengecekan apakah linked list masih kosong atau tidak. Jika masih kosong, maka head akan menunjuk ke Node baru yang telah dibuat.
        // Jika tidak kosong, maka dilakukan pencarian hingga ke akhir linked list untuk menambahkan Node baru sebagai elemen terakhir.
        if (head == nullptr) {
            head = newNode;
        } else {
            Node* temp = head;
            // Loop while ini digunakan untuk melakukan iterasi melalui linked list hingga sampai pada elemen terakhir.
            // Pada setiap iterasi, pointer 'temp' dipindahkan ke elemen berikutnya '(temp->next)'.
            while (temp -> next != nullptr) {
                temp = temp -> next;
            }
            temp -> next = newNode;
        }
    }

    cout << endl;
    cout << "Output Data" << endl;
    cout << "Normal     : ";
    // Digunakan untuk melintasi linked list dan mencetak data setiap Node.
    Node* temp = head;
        while (temp != nullptr) {
            cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
    // Inisialisasi dari beberapa pointer yang akan digunakan dalam proses pembalikan linked list.
    // Pointer 'current' digunakan untuk traversal linked list,
    // pointer 'prev' digunakan untuk menyimpan Node sebelumnya, dan pointer 'next' digunakan untuk menyimpan Node selanjutnya.
    Node* current = head;
    // Menggunakan nullptr untuk inisialisasi pointer
    Node* prev = nullptr;
    Node* next = nullptr;

    // loop while yang akan terus berjalan selama pointer 'current' tidak menunjuk ke 'nullptr'.
    while (current != nullptr) {
        next = current -> next;
        current -> next = prev;
        prev = current;
        current = next;
    }
    head = prev;

    cout << "Reverse    : ";
    // Inisialisasi pointer 'temp' yang akan digunakan untuk melakukan traversal linked list, dimulai dari Node pertama '(head)'.
    temp = head;
    // Loop while yang akan terus berjalan selama pointer 'temp' tidak menunjuk ke 'nullptr', yang menandakan akhir dari linked list.
    while (temp != nullptr) {
        // Pada setiap iterasi, nilai data dari Node yang ditunjuk oleh 'temp' akan ditampilkan.
        cout << temp -> data << " ";
        // Setelah menampilkan nilai data dari Node saat ini
        // pointer 'temp' akan dipindahkan ke Node selanjutnya dalam linked list dengan mengakses 'next' dari Node saat ini.
        temp = temp -> next;
    }

    // Identitas pembuat program
    cout << endl;
    cout << "----------------------------------------" << endl;
    cout << "\nProgram ini dibuat oleh:" << endl;
    cout << "Nama   : Cindy Priaulia Maharani Putri" << endl;
    cout << "NPM    : 2310631170129" << endl;
    cout << "\nTerimakasih banyak sudah menggunakan program ini :)" << endl;

    return 0;
}
