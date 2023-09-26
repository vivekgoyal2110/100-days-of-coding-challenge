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
        this -> next = NULL;
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
    temp -> prev = tail;
    temp -> next = NULL;
    tail = temp -> next;
}

int main(){
    Node* node1 = new Node(10);
    // cout<<node1 -> data<<endl;
    Node* head = node1;
    Node* tail = node1;
    print(head);
    cout<<getlen(head)<<endl;
    InsertAtHead(head, 15);
    print(head);
    InsertAtTail(tail, 25);
    print(head);
}