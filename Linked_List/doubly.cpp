#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node * prev;
    Node * next;
    //constructor
    Node(int d){
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }
    //destructor
    ~Node(){
        int value = this->data;
        //memeory free
        if(next != NULL){
            delete next;
            next = NULL; 
        }
        cout<<"memory is free for node with data "<<value <<endl;
    }
};

int getlength(Node* &head){
    Node* temp = head;
    int len = 0;
    while(temp!= NULL){
        len++;
        temp = temp->next;
    }
    
    return len;
}
void InsertAtHead(Node* &tail,Node* &head, int d){
    //empty list
    if(head==NULL){
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else{
        Node *temp = new Node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
    
}

void InsertAtTail(Node* &tail, Node* &head, int d){
    if(tail == NULL){
        //empty list
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else{
        Node *temp = new Node(d);
        tail->next = temp;
        temp->prev = tail;
        temp->next = NULL;
        tail = temp;
    }
}

void InsertAtPosition(Node* &head, Node* &tail, int position, int d){
    //insert at start 
    if(position == 1){
        InsertAtHead(tail,head,d);
        return;
    }

    Node* temp = head;
    int cnt = 1;
    while(cnt < position - 1){
        temp = temp->next;
        cnt++;
    }
    //inserting at last position
    if(temp->next == NULL){
        InsertAtTail(tail,head,d);
        return;
    }
    //creating a node for d
    Node* nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;
}

void deleteNode(int position , Node* &head, Node* &tail){
    if(position == 1){
        Node *temp = head;
        temp->next->prev  = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }
    else{
        //delete any middle or last node
        Node *curr = head;
        Node * prev = NULL;

        int cnt = 1;
        while(cnt<position){
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        // delete lastnode
        if(curr->next == NULL){
            tail = prev;
            prev->next = NULL;
            curr->prev = NULL;
            delete curr;
        }
        else{
            //delete middle node somewhere
            prev->next = curr->next;
            curr->next->prev = prev;
            curr->next = NULL;
            curr->prev = NULL;
            delete curr;
        }
    }

}

void print(Node* &head){
    Node* temp = head;
    while(temp!= NULL){
        cout<<temp->data <<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main(){
    // Node *node1 = new Node(10);

    Node* head = NULL;
    Node* tail = NULL;
    print(head);

    InsertAtHead(tail,head,11);
    InsertAtHead(tail,head,12);
    InsertAtHead(tail,head,13);

    InsertAtTail(tail,head,21);

    InsertAtPosition(head,tail,1,100);
    InsertAtPosition(head,tail,6,110);

    print(head);

    cout<<"head ka data "<<head->data<<endl;
    cout<<"tail ka data "<<tail->data<<endl;

    deleteNode(6, head,tail);
    print(head);
    cout<<"head ka data "<<head->data<<endl;
    cout<<"tail ka data "<<tail->data<<endl;
    // cout<<getlength(head)<<endl;

    return 0;
    
}