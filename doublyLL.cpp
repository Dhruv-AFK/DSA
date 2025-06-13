#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* prev;
    Node* next;

    //constructor
    Node(int d){
        this -> data = d;
        this -> prev = NULL;
        this -> next = NULL;
    }

    ~Node(){
        int val = this -> data;  // store value
        if(next != NULL ){       // check next pointer is null or not
            delete next;
            next = NULL;
        }
        cout << " memory free for node with data = "<< val<<endl;
    }
};

// traversing a linked list 
void print ( Node* head){
    Node* temp = head;

    while ( temp != NULL ){
        cout << temp -> data <<" ";
        temp = temp -> next;
    }
    cout << endl;
}

//length of linked list
int getlength( Node* head ){
    Node* temp = head;
    int len = 0;

    while(temp != NULL){
        len++;
        temp = temp -> next;
    }
    return len;
}

void InsertAtHead( Node* &head , Node* &tail , int d){
    
    //empty list
    if(head == NULL){
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else{
        Node* temp = new Node(d);
        temp -> next = head;
        head -> prev = temp;
        head = temp;
    }
}

void InsertAtTail ( Node* &head , Node* &tail , int d){
    if ( tail == NULL){
        Node* temp = new Node(d);
        head = temp ;
        tail = temp;
    }
    else{
        Node* temp = new Node(d);
        tail -> next = temp;
        temp -> prev = tail;
        tail = temp;
    }
}

void InsertAtPosition ( Node* &head , Node* &tail , int position , int d ){

    //insertion at start
    if ( position == 1 ){
        InsertAtHead(head , tail , d );
        return;
    }

    //traversing to n-1 node
    Node* temp = head;
    int cnt = 1;

    while( cnt < position - 1){
        temp = temp -> next;
        cnt++;
    }

    //inserting at lat position
    if ( temp -> next == NULL){
        InsertAtTail( head, tail, d);
        return;
    }

    //createing nodetoinsert
    Node* nodetoInsert = new Node(d);

    //insertion in middle
    nodetoInsert -> next = temp -> next;
    temp -> next -> prev = nodetoInsert;
    temp -> next = nodetoInsert;
    nodetoInsert -> prev = temp;
}

void deleteNode ( Node* &head , int position){

    //deleting first node
    if ( position == 1 ){
        Node* temp = head;
        temp -> next -> prev = NULL;
        head = temp -> next;
        temp -> next = NULL;
        delete temp;
    }
    else{

        // delete middle or last node
        Node* curr = head ; 
        Node* prev = NULL;

        int cnt = 1;
        while( cnt < position){
            prev = curr;
            curr = curr -> next ;
            cnt++;
        }

        curr -> prev = NULL;
        prev -> next = curr -> next;
        curr -> next = NULL;

        delete curr;
    }
}

int main (){

    Node* head = NULL;
    Node* tail = NULL;

    print(head);

    InsertAtHead(head , tail , 5);
    print(head);

    InsertAtHead(head , tail , 3);
    print(head);

    InsertAtHead(head , tail , 1);
    print(head);

    InsertAtTail( head , tail , 7);
    print(head);

    InsertAtTail( head , tail , 10);
    print(head);

    cout << "head  " << head -> data << endl;
    cout << "tail  " << tail -> data << endl;


    InsertAtPosition(head ,tail , 5 , 8 );
    print(head);

    InsertAtPosition(head ,tail , 1 , 0 );
    print(head);

    cout << "head  " << head -> data << endl;
    cout << "tail  " << tail -> data << endl;

    deleteNode( head , 4);
    print(head);
}