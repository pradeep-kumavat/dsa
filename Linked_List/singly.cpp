#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node * next;
    //constructor
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
    //destructor
    ~Node(){
        int value = this->data;
        //memeory free
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
        cout<<"memory is free for node with data "<<value <<endl;
    }
};

void InsertAtHead(Node* &head, int d){
    //new node creation
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void InsertAtTail(Node* &tail, int d){
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void InsertAtPosition(Node* &head, Node* &tail, int position, int d){
    //insert at start 
    if(position == 1){
        InsertAtHead(head,d);
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
        InsertAtTail(tail,d);
        return;
    }
    //creating a node for d
    Node* nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;

}

void deleteNode(int position , Node* &head, Node* &tail){
    if(position ==1){
        Node *temp = head;
        head = head->next;
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
        
        if(curr->next == NULL){
            prev->next = curr->next;
            tail = prev;
        }
        else{
            prev->next = curr->next;
        }  
        curr->next = NULL;
        delete curr;
    }

}

void print(Node* &head){
    Node* temp = head;
    while(temp!= NULL){
        cout<<temp->data <<" ";
        temp = temp->next ;
    }
    cout<<endl;
}

int getLength(Node *head){
    Node *temp = head;
    int len=0;
    while(temp!=NULL){
        len++;
        temp = temp->next;
    }
    return len;
}
bool searchElement(Node *head, int element, int n){
    Node *temp = head;
    while(temp!=NULL){
        if(temp->data == element){
            return true;
        }
        else{
            temp = temp->next;
        }
    }
    
    return false;
}

int main(){
    //creating a new node
    Node *node1 = new Node(10);
    cout<< node1->data<<endl;
    cout<< node1->next<<endl;

    // head pointed to node1
    Node *head = node1;
    Node *tail = node1;

    InsertAtTail(tail, 21); 
    InsertAtTail(tail, 22); 
    InsertAtTail(tail, 23); 
    InsertAtTail(tail, 24); 

    // InsertAtHead(head, 12);
    // InsertAtHead(head, 13);
    // InsertAtHead(head, 14);

    InsertAtPosition(head,tail,6,100);
    InsertAtPosition(head,tail,7,110);


    print(head);

    cout<<"head ka data "<<head->data<<endl;
    cout<<"tail ka data "<<tail->data<<endl;

    // InsertAtPosition(head,tail,6,100);
    deleteNode(4,head,tail);
    print(head); 

    cout<<"head ka data "<<head->data<<endl;
    cout<<"tail ka data "<<tail->data<<endl;
    
    cout<<"length of the linked list is :"<<getLength(head)<<endl;;
    int length = getLength(head);

    int element = 110;
    bool check = searchElement(head, element, length);
    if(check){
        cout<<"the element "<<element<<" is present"<<endl;
    }
    else{
        cout<<"the element "<<element<<" is not present"<<endl;
    }

    deleteNode(6,head,tail);
    print(head); 

    cout<<"head ka data "<<head->data<<endl;
    cout<<"tail ka data "<<tail->data<<endl;
    return 0;
}