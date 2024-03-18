#include <iostream>
using namespace std;

struct node{
    int data;
    node* next;
};

int main (){
    // Membuat simpul pertama
    node* head = new node();
    head->data = 1;
    head->next = NULL;

    // Membuat simpul kedua
    node* second = new node();
    second->data = 2;
    second->next = NULL;

    // Menyambungkan simpul pertama dan kedua
    head->next = second;

    // Buat simpul ketiga
    node* thrid = new node();
    thrid->data = 3;
    thrid->next = NULL;

    // Menyambungkan simpul kedua dan ketiga
    second->next = thrid;

    node* node = head // Mengarahkan ke simpul pertama untuk kemudian dilooping
    while(node != NULL){
        cout << node->data << " "; // Output datapada simpul
        node = node->next; // Mengarahkan ke simpul selanjutnyauntuk dilooping
    }
    return 0;
}
