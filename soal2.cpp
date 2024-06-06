#include <iostream>
using namespace std;

typedef struct node*address;
struct node{
    address prev;
    int data;
    address next;
};

address first,last=NULL;

address alokasi(int datanya){
    address hasil = new node;
    hasil-> data=datanya;
    hasil->next=hasil->prev=NULL;
    return hasil;
}

void insertFirst(address baru){
    if(first==NULL){
        first=last=baru;
    }else{
        baru->next=first;
        first->prev=baru;
        first=baru;
    }
}

void insertLast(address baru){
    if(first==NULL){
        first=last=baru;
    }else{
        last->next=baru;
        baru->prev=last;
        last=baru;
    }
}

void deleteFirst(){
    if(first==NULL){
        cout<<"Daftar buku kosong."<<endl;
        return;
    }
    first=first->next;
    delete first->prev;
    first->prev=NULL;
}

void deleteLast(){
    if(first==NULL){
        cout<<"Daftar buku kosong."<<endl;
        return;
    }
    last=last->prev;
    delete last->next;
    last->next=NULL;
}

void cetak(){
    address p=first;
    while(p!=NULL){
        cout<<"ID Buku:"<<p->data<<endl;
        p=p->next;
    }
}

bool isPrime(int n){
    
     
}

void printPrimeBookIDs(){
address p=first;
    while(p!=NULL){
        cout<<"ID Prime:"<<p->data<<endl;
        p=p->next;
    }
}

address cariBuku(int id){

}

void hapusBuku(int id){
    if(first==NULL){
        cout<<"Daftar buku kosong."<<endl;
        return;
    }
    first=first->next;
    delete first->prev;
    first->prev=NULL;

    if(first==NULL){
        cout<<"Daftar buku kosong."<<endl;
        return;
    }
    last=last->prev;
    delete last->next;
    last->next=NULL;

}

int main(){
    insertLast(alokasi(10));
    insertLast(alokasi(30));
    insertLast(alokasi(50));
    insertLast(alokasi(19));
    insertLast(alokasi(90));
    insertLast(alokasi(27));
    insertLast(alokasi(11));

    cout<<"Daftar buku awal:"<<endl;
    cetak();

    hapusBuku(20);
    hapusBuku(10);

    cout<<"\nDaftar buku setelah penghapusan:"<<endl;
    cetak();
    printPrimeBookIDs();
    return 0;
}
