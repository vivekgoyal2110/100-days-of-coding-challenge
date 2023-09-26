#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    //constructor
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }

    //destructor
    ~Node(){
        int value = this -> data;
        if(this -> next != NULL){
            delete next;
            this -> next = NULL;
        }
        cout<<"Memory is free now with data : "<<value<<endl;
    }
};

void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp -> next;
    }
    cout<<endl;
}

void insertAthead(Node* &head, int d){
    //creation of a new node
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

void insertAtTail(Node* &tail, int d){
    //creation of a new node
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = tail -> next;
}

void insertAtPosition(Node* &tail, Node* &head, int position, int d){
    Node* temp = head;
    //inserting at starting position
    if(position == 1){
        insertAthead(head, d);
        return;
    }

    int cnt = 1;
    while(cnt < position-1){
        temp = temp -> next;
        cnt++;
    }
    //inserting at last position
    if(temp -> next == NULL){
        insertAtTail(tail, d);
        return;
    }
    Node* nodetoinsert = new Node(d);
    nodetoinsert -> next = temp -> next;
    temp -> next = nodetoinsert;

}

void deleteNode(int position, Node* &head){
    //deleting first or head node
    if(position == 1){
        Node* temp = head;
        head = head -> next;
        //memory free
        temp -> next = NULL;
        delete temp;
    }
    //deleting any middle or last node
    else{
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt < position){
            prev = curr;
            curr = curr -> next;
            cnt++;
        }

        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;
    }
}

int main(){
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    insertAthead(head, 15);
    print(head);
    insertAtTail(tail, 25);
    print(head);
    insertAtPosition(tail, head, 3, 20);
    print(head);
    deleteNode(3, head);
    print(head);
    cout<<head->data<<endl;
    cout<<tail->data<<endl;
}