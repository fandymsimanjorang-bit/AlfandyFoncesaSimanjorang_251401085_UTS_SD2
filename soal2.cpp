#include <iostream>
using namespace std;

struct Node {
    str nama:
    int data;
    Node* next;
};

Node* head = nullptr;

void tambahAwal(int nilai) {
    Node* baru = new Node;
    baru->data = nilai;
    baru->nama = name;
    baru->next = head;
    head = baru;
}

void tambahAkhir(int nilai) {
    Node* baru = new Node;
    baru->data = nilai;
    baru->nama = name;
    baru->next = nullptr;

    if (head == nullptr) {
        head = baru;
        return;
    }

    Node* bantu = head;
    while (bantu->next != nullptr) {
        bantu = bantu->next;
    }

    bantu->next = baru;
}

void deleteFirst() {
    if(head == NULL){
        cout << "List nya kosong\n";
        return;
    }
    Node *temp = head;
    head = head -> next;
    if(head == NULL) tail = NULL;
    delete temp;

void tampilkan() {
    Node* bantu = head;

    cout << "Isi Linked List: ";

    while (bantu != nullptr) {
        cout << bantu->data << " -> ";
        bantu = bantu->next;
    }

    cout << "NULL\n";
}

int main() {
    int pilihan, nilai, target;

    do {
        cout << "\n===== MENU SINGLE LINKED LIST =====\n";
        cout << "1. Tambah data di awal\n";
        cout << "2. Tambah data di akhir\n";
        cout << "4. Hapus data di awal\n";
        cout << "5. Tampilkan HANYA pendaftar yang Lolos\n";
        cout << "0. Keluar\n";
        cout << "Pilihan: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "Masukkan data: ";
                cin >> nilai;
                tambahAwal(nilai);
                tampilkan();
                break;

            case 2:
                cout << "Masukkan data: ";
                cin >> nilai;
                tambahAkhir(nilai);
                tampilkan();
                break;

            case 3:
                cout << "Masukkan nilai baru: ";
                cin >> nilai;
                cout << "Masukkan nilai yang ingin dicari: ";
                cin >> target;
                tambahSetelahNilai(target, nilai);
                tampilkan();
                break;

   
            case 0:
                break;

            default:
                cout << "Pilihan tidak valid.\n";
        }

    } while (pilihan != 0);

    hapusSemua();

    return 0;
}
