#include <iostream>
using namespace std;

int compress (char chars, int length) {
    // Index untuk mengatur penulisan untuk index chars
    int index = 0;
    // Variabel untuk menghitung jumlah karakter yang sama berurutan
    int count = 1;

    //Looping untuk mengecek karakter satu per satu
    for (int i = 1; i <= length; i++){
        if (chars[i] == chars[i-1]){
            count++;
        } else {
            // Menyimpan karakter yang berbeda di array chars`
            chars[index++] = chars[i-1];
            if (count > 1){
                string count_str = to_string (count);
                for (int j = 0; j < count_str.length(); j++){
                    // Menyimpan jumlah karakter yang sama di arry chars
                    chars[index++] = count_str[j];
                }
            }
            // Mengembalikan hitungan ke 1 untuk karakter baru
            count = 1;
    }
    // Mengembalikan panjang array setelah dikompresi
    return index;
}

int main(){
    int length;

    // Meminta user untuk menginput panjang array
    cout << "Masukkan Panjang Array: ";
    cin >> length;
    // Mendeklarasi array karakter
    char chars[length];
    // Meminta input karakter array
    cout << "Masukkan Karakter Array: ";
    for (int i = 0; i < length; i++) {
        cin >> chars[i];
    }
    // Memanggil fungsi kompresi
    int compressed_length = compress(chars, length);
    for (int i =0; i < compressed_length; i++) {
        // Menampilkan karakter setelah dikompresi
        cout << chars[i];
    }
    cout << "----------------------------------------" << endl;
    cout << "\nProgram ini dibuat oleh:" << endl;
    cout << "Nama   : Cindy Priaulia Maharani Putri" << endl;
    cout << "NPM    : 2310631170129" << endl;
    cout << "\nTerimakasih banyak :)" << endl;

    cout << endl;
    return 0;
}
