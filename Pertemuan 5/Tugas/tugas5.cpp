#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

struct Hanoi {
    int data [MAX_SIZE];
    int top;

    // Untuk menginisialisasi Menara Hanoi
    Hanoi() : top(-1) {}
};

bool push (Hanoi& hanoi, int value) {
    if (hanoi.top == MAX_SIZE - 1) {
        cout << "Menara penuh!" << endl;
        return false;
    }
    hanoi.data[++hanoi.top] = value;
    return true;
}

int pop (Hanoi& hanoi) {
    if (hanoi.top == -1) {
        cout << "Menara kosong!" << endl;
        return -1;
    }
    return hanoi.data[hanoi.top--];
}

void display(const Hanoi& hanoi, const char* name) {
    cout << "Menara " << name << ": ";
    if (hanoi.top == -1) {
        cout << "Kosong";
    } else {
        for (int i = hanoi.top; i >= 0; --i) {
            cout << hanoi.data[i] << " ";
        }
    }
    cout << endl;
}

void move (Hanoi& from, Hanoi& to, const char* from_name, const char* to_name) {
    int disk = pop (from);
    if (disk == -1) {
        return;
    }
    if (!push(to, disk)) {
        cout << "Tidak dapat memindahkan nilai " << disk << " dari menara " << from_name << " ke menara " << to_name << endl;
        push(from, disk);
    } else {
        cout << "Memindahkan nilai " << disk << " dari menara " << from_name << " ke menara " << to_name << endl;
    }
}

int main () {
    Hanoi A;
    Hanoi B;
    Hanoi C;

    push(B, 60);
    push(B, 40);
    push(B, 20);

    cout << "-----Hanoi Tower-----" << endl;
    cout << "=====================" << endl;
    display(A, "A");
    display(B, "B");
    display(C, "C");
    cout << endl;

    move (B, C, "B", "C");
    move (B, C, "B", "C");

    cout << "-----Hanoi Tower-----" << endl;
    cout << "=====================" << endl;
    display(A, "A");
    display(B, "B");
    display(C, "C");
    cout << endl;

    move(C, A, "C", "A");

    cout << "-----Hanoi Tower-----" << endl;
    cout << "=====================" << endl;
    display(A, "A");
    display(B, "B");
    display(C, "C");
    cout << endl;

    move(C, B, "C", "B");

    cout << "-----Hanoi Tower-----" << endl;
    cout << "=====================" << endl;
    display(A, "A");
    display(B, "B");
    display(C, "C");

     cout << "----------------------------------------" << endl;
     cout << "\nTerimakasih banyak :)" << endl;
     cout << "\nProgram ini dibuat oleh:" << endl;
     cout << "Nama   : Cindy Priaulia Maharani Putri" << endl;
     cout << "NPM    : 2310631170129" << endl;

    return 0;
}

