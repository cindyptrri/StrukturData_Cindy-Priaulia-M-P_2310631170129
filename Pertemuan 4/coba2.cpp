#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;

struct dataKtp{
    char nama[50];
    char alamat[50];
    char golonganDarah[2];
    // Membuat node next dan node previous
    dataKtp *nextNode, *prevNode;
};

/* Menginisiasi node pertama = null
menginisiasi node terakhir = null
menginisiasi pembuatan node helper
menginisiasi pembuatan node baru
*/

dataKtp *first=NULL, *last=NULL, *loopHelper, *newNode;

void inputDataDepan(){
    newNode = new dataKtp;
    newNode->nextNode = NULL;
    newNode->prevNode = NULL;
    cout << "Nama           : ";
    cin  >> newNode->nama;
    cout << "Alamat         : ";
    cin  >> newNode->alamat;
    cout << "Golongan darah : ";
    cin  >> newNode->golonganDarah;
    if(first == NULL) {
        first = last = newNode;
    } else{
        newNode->nextNode = first;
        first->prevNode = newNode;
        first = newNode;
    }
    system ("cls");
}

void inputDataBelakang(){
    newNode = new dataKtp;
    newNode->nextNode = NULL;
    newNode->prevNode = NULL;
    cout << "Nama           : ";
    cin  >> newNode->nama;
    cout << "Alamat         : ";
    cin  >> newNode->alamat;
    cout << "Golongan darah : ";
    cin  >> newNode->golonganDarah;
    if(first == NULL) {
        first = last = newNode;
    } else{
        last->nextNode = newNode;
        newNode->prevNode = last;
        last = newNode;
    }
    system ("cls");
}

void outputData(){
    loopHelper = first;
    while(loopHelper != NULL){
        cout << "Nama           : " << loopHelper->nama << endl;
        cout << "Alamat         : " << loopHelper->alamat << endl;
        cout << "Golongan darah : " << loopHelper->golonganDrah << endl;
    }
}
