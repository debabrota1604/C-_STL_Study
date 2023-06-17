#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node(int inp){ data = inp;}
};

void printList(Node *root){
    while(root != nullptr){
        cout << root->data << " ";
        root = root->next;
    }
    cout << endl;
}

void insertBeginning(Node **head, int num){
    Node *temp = new Node(num);
    temp->next = *head;
    //head = &temp;     //wrong assignment
    *head = temp;
}

void insertAtEnd(Node **head, int num){
    Node *iter = *head;
    while(iter->next !=nullptr){ iter = iter->next; }
    Node *temp = new Node(num);
    iter->next = temp;
}




int main(){
    int *p1, x; 
    x=5; p1=&x;
    cout << "Pointer value " << *p1 << endl;

    
    Node *temp = new Node(0);
    cout << "Head node: " << temp->data << endl;

    //insert at beginning---------------------------------------
    //create head pointer
    Node **head; head = &temp;
    cout << "head node value: "  << (*head)->data << endl;

    // create temp node and replace head
    // Node *temp2 = new Node(5);
    // temp2->next = *head;
    // head = &temp2;
    insertBeginning(&temp, 5);
    cout << "insert at beginning\n";
    printList(temp);

    //insert at end----------------------------------------------
    insertAtEnd(&temp, 7);
    cout << "insert at end\n";
    printList(temp);

    





}