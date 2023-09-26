#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    Node* prev;
    int data;
    Node* next;

    //constructor
    Node(int data){
        this -> data = data;
        this -> prev = NULL;
        this -> next  = NULL;
    }
};

void print(Node* head){
    Node* temp = head;

    while(temp != NULL){
        cout<<temp -> data<<" ";
        temp = temp -> next;
    }
    cout<<endl;
}

int getlen(Node* head){
    Node* temp = head;
    int cnt = 0;
    while(temp != NULL){
        cnt++;
        temp = temp -> next;
    }
    return cnt;
}

void InsertAtHead(Node* &head, int d){
    Node* temp = new Node(d);
    temp -> prev = NULL;
    temp -> next = head;
    head = temp;
}

void InsertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    temp -> next = temp;
    temp -> prev = tail;
    tail = temp;
}

void insertAtPosition(Node* &tail, Node* &head, int position, int d){
    if(position == 1){
        InsertAtHead(head, d);
        return;
    }

    Node* temp = head;
    int cnt = 1;
    while(cnt < position-1){
        temp = temp -> next;
        cnt++;
    }

    //inserting at any middle or last position
    Node* nodetoinsert = new Node(d);
    nodetoinsert -> next = temp -> next;
    temp -> next -> prev = nodetoinsert;
    temp -> next = nodetoinsert;
    nodetoinsert -> prev = temp;


}

int main(){
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    print(head);
    InsertAtHead(head, 15);
    print(head);
    InsertAtTail(tail, 25);
    print(head);
}