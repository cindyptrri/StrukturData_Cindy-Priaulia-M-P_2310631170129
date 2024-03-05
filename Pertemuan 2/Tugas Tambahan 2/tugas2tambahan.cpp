#include <iostream>
using namespace std;

int main (){
    int matrixA[2][2];
    int matrixB[2][2];

    // Masukkan nilai matrix A
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            cout << "Masukkan nilai dari matrix A = [" << i << "][" << j << "] :";
            cin >> matrixA[i][j];
        }
    }

    // Output matrix A
    cout << "Matrix A : " << endl;

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            cout << matrixA[i][j] << " ";
        }
        cout << endl;
    }
    //Masukkan nilai matrix B
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            cout << "Masukkan nilai dari matrix B = [" << i << "][" << j << "] :";
            cin >> matrixB[i][j];
        }
    }

    // Output matrix B
    cout << "Matrix B : " << endl;

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            cout << matrixB[i][j] << " ";
        }
        cout << endl;
    }

    //Perkalian matrix
    int matrixC [2][2];
    cout << "Matrix C = Matrix A * Matrix B = " << endl;
    for (int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            matrixC[i][j] = 0;
            for (int k = 0; k < 2; k++){
                matrixC[i][j] += matrixA[i][k] * matrixB[k][j];
            }
            cout << matrixC[i][j] << " ";
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




