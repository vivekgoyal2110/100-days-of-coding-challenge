#include<iostream>
using namespace std;

// class Node {
//     public:
//     int data;
//     Node* next;

//     //constructor
//     Node(int data){
//         this -> data = data;
//         this -> next = NULL;
//     }
// };

// void insertAtHead(Node* &head,int d){
//     //creation of new node
//     Node* temp = new Node(d);
//     temp -> next = head;
//     head = temp;
// }

// void print(Node* &head){
//     Node* temp = head;
//     while(temp != NULL){
//         cout<<temp -> data<<" ";
//         temp = temp -> next;
//     }
//     cout<<endl;
// }

// int main(){

//     Node* node1 = new Node(10);
//     // cout<<node1 -> data<<endl;
//     // cout<<node1 -> next<<endl;
//     Node* head = node1;
//     print(head);
//     insertAtHead(head,12);
//     print(head);
//     insertAtHead(head,15);
//     print(head);
// }

class Node{
    public:
    int data;
    Node* next;

    //constructor
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }

    ~Node(){
        int value = this -> data;
        if(this -> next != NULL){
            delete next;
            this -> next = NULL;
        }
    }
};

void insertAtHead(Node* &head, int d){
    //new node create
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

void print(Node* &head){
    Node* temp = head;

    while(temp!=NULL){
        cout<< temp -> data<<" ";
        temp = temp -> next;
    }
    cout<<endl;
}

void insertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = tail -> next;
}

void insertAtPosition(Node* &head,int position, int d){
    Node* temp = head;
    int cnt = 1;

    while(cnt < position-1){
        temp = temp -> next;
        cnt++;
    }

    //creating a node for d
    Node* nodeToInsert = new Node(d);

    nodeToInsert -> next = temp -> next;
    temp -> next = nodeToInsert;

}

void deleteNode(int position, Node* &head){
    //deleting first or start node
    if(position == 1){
        Node* temp = head;
        head = head -> next;
        //memory free start node
        temp -> next = NULL;
        delete temp;
    }
    else{
        //deleting any middle node or last node
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
    cout<<node1 -> data<<endl;
    cout<<node1 -> next<<endl;

    //head pointed to node 1
    Node* head = node1;
    Node* tail = node1;
    print(head);
    insertAtHead(head,15);
    print(head);
    insertAtHead(head,25);
    print(head);
    insertAtTail(tail, 20);
    print(head);
    insertAtPosition(head, 3, 17);
    print(head);
    deleteNode(3, head);
    print(head);
    deleteNode(1, head);
    print(head);
    deleteNode(1, head);
    print(head);
    deleteNode(1, head);
    print(head);
    deleteNode(1, head);
    print(head);
    insertAtHead(head, 7);
    print(head);
    insertAtPosition(head, 2, 2);
    print(head);
    insertAtPosition(head, 2, 3);
    print(head);
    insertAtPosition(head, 3, 4);
    print(head);


}