#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Masukkan ukuran array (n x n) " << endl;
    cout << " n  =  ";
    cin  >> n;

    int m[n][n];

    // Digunakan untuk menginput nilai array
    cout << "Masukkan nilai elemen array:" << endl;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << "Masukan elemen [" << i + 1 << "] [" << j + 1 << " ] : ";
                cin  >> m[i][j];
            }
        }

    // Digunakan untuk menampilkan array awal
    cout << endl << "Array awal:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }

    // Putar gambar 90 derajat searah jarum jam
    for (int i = 0; i < n / 2; i++) {
        for (int j = i; j < n - i - 1; j++) {
            int a = m[i][j];
            m[i][j] = m[n - 1 - j][i];
            m[n - 1 - j][i] = m[n - 1 - i][n - 1 - j];
            m[n - 1 - i][n - 1 - j] = m[j][n - 1 - i];
            m[j][n - 1 - i] = a;
        }
    }

    // Tampilkan array setelah diputar
    cout << endl << "Array setelah diputar 90 derajat searah jarum jam:" << endl;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << m[i][j] << " ";
            }
            cout << endl;
        }

    cout << "----------------------------------------" << endl;
    cout << "\nProgram ini dibuat oleh:" << endl;
    cout << "Nama   : Cindy Priaulia Maharani Putri" << endl;
    cout << "NPM    : 2310631170129" << endl;
    cout << "\nTerimakasih banyak :)" << endl;

    return 0;
}
