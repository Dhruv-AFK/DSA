#include<iostream>
using namespace std;

class node {
    public:
    int data;
    node* next;

    //constructor
    node(int data){
        this -> data = data;
        this -> next = NULL;

    }
    //destructor
    ~node(){
        int value = this -> data ;

        if(this -> next != NULL ){
            delete next;
            this -> next = NULL ; 
        }
        cout << "memory is free for node with data " << value << endl;
    }
};

void insertAtHead (node* &head, int d){
    node* temp = new node(d);
    temp -> next = head;
    head = temp;
}

void InsertAtTail(node* &tail , int d){
    node* temp = new node(d);
    tail -> next = temp;
    tail = temp;
}

void InsertAtPosition( node* &head , node* &tail , int position , int d){
    
    // insertion at start
    if ( position == 1 ){
        insertAtHead(head , d);
        return; 
    }

    node* temp  = head ;  //for traversing
    int cnt  = 1;

    while ( cnt < position - 1 ){
        temp = temp -> next;
        cnt ++;
    }

    node* nodeToinsert = new node (d); // creating node for d
    nodeToinsert -> next = temp -> next;
    temp -> next = nodeToinsert;

    // Inserting at the end
    if (nodeToinsert->next == NULL) {
        tail = nodeToinsert; // Update tail correctly
    }

}

void deleteNode( node* &head , int position){

    if ( position == 1 ){    // first node
        node* temp = head;
        head =  head -> next;

        //memory free start node
        temp -> next = NULL;
        delete temp;
    }
    else{
        node* curr = head;  // delete middle or last node
        node* prev = NULL;
        int cnt = 1;

        while ( cnt < position){
            prev = curr;
            curr = curr -> next ;
            cnt++;
        }
        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;
    }
}

void print ( node* &head){
    if (head == NULL){
        cout << "list is empty " << endl;
        return;
    }
    node* temp = head;

    while (temp !=NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

int main(){
    
    //creat a new node 
    node* node1 = new node(10);

    node* head = node1;
    node* tail = node1;
    
    print (head);

    insertAtHead (head , 5);

    print (head);

    InsertAtTail ( tail , 20);
    InsertAtTail ( tail , 25);
    insertAtHead (head , 1);
    print(head);

    InsertAtPosition ( head , tail , 5 , 21);
    print(head);

    InsertAtPosition ( head , tail , 7, 30);
    print(head);

    cout << "head = " << head -> data << endl;
    cout << "tail = " << tail -> data << endl;

    deleteNode ( head , 4 );
    print (head);

}