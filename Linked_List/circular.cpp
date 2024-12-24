#include<iostream>
#include<map>
using namespace std;

class Node{
    public:
    int data;
    Node * next;

    //constructor
    Node(int d){
        this->data = d;
        this->next = NULL;
    }
    //destructor
    ~Node(){
        int value = this->data;
        //memeory free
        if(this->next != NULL){
            delete next;
            next = NULL; 
        }
        cout<<"memory is free for node with data "<<value <<endl;
    }
};

void InsertNode(Node* &tail, int element, int d){
   
    //empty list
    if(tail==NULL){
        Node* newNode = new Node(d);
        tail= newNode;
        newNode->next = newNode;
    }
    else{
        // empty list
         //assuming that the element present in the list
        
        Node* curr = tail;
        while(curr->data!= element){
            curr = curr->next; 
        }

        //elementt found - curr is representing element wala node
        Node * temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}   

void deleteNode(Node* &tail, int value){

    //empty list
    if(tail == NULL){
        cout<<"list is empty, please check again"<<endl;
    }
    else{
        //non-empty

        //assuming that value is present in the linked list
        Node* prev = tail;
        Node* curr = prev->next;

        while(curr->data != value){
            prev= curr;
            curr = curr->next;
        }

        prev->next = curr->next;

        // 1 node linked list
        if(curr == prev){
            tail = NULL;
        }

        // 2 node linked list
        else if(tail == curr){
            tail = prev;
        }
        curr->next = NULL;
        delete curr;
    }

}

void print(Node* &tail){

    //empty list
    if(tail == NULL){
        cout<<"list is empty"<<endl;
        return;
    }

    Node *temp = tail;
    do{
        cout<<tail->data <<" ";
        tail = tail->next;
    }while(tail != temp);

    cout<<endl;
}

bool isCircular(Node* head){
    //empty list
    if(head == NULL){
        return true;
    }
    Node* temp = head->next;
    while(temp != NULL && temp != head){
        temp = temp->next;
    }

    if(temp == head){
        return true;
    }

    return false;
}

bool detectLoop(Node* head){
    if(head == NULL){
        return false;
    }
    map<Node*, bool> visited;
    Node* temp = head;

    while(temp!= NULL){
        //cycle is present
        if(visited[temp] == true){
            return true;
        }
        visited[temp] = true;
        temp = temp->next;
    }

    return false;
}

Node *floyDetectLoop(Node* head){
    if(head == NULL){
        return NULL;
    }
    Node* slow = head;
    Node* fast = head;

    while(slow != NULL && fast!=NULL){
        fast = fast->next;
        if(fast!=NULL){
            fast = fast->next;
        }
        slow = slow->next;

        if(slow==fast){
            cout<<"present at " <<slow->data<<endl;
            return slow;
        }
    }
    return NULL;
}

Node* getStartingNode(Node* head){
    if(head == NULL){
        return NULL;
    }

    Node * intersection = floyDetectLoop(head);
    Node* slow = head;
    while(slow != intersection){
        slow = slow->next;
        intersection = intersection->next;
    }

    return slow;
}

void removeLoop(Node* head){
    if(head == NULL){
        return;
    }

    Node *start = getStartingNode(head);
    Node * prev = start;
    while(prev->next!=start){
        prev = prev->next;
    }

    prev->next = NULL;
    return;
}

int main(){

    Node* tail = NULL;

    //empty list me insert kr rhe hai
    InsertNode(tail,5,3);

    print(tail);

    InsertNode(tail,3,5);

    print(tail);

    // InsertNode(tail,5,7);

    // print(tail);

    // InsertNode(tail,7,9);

    // print(tail);

    // InsertNode(tail,5,6);

    // print(tail);

    // InsertNode(tail,9,10);

    // print(tail);

    // InsertNode(tail,3,4);

    // print(tail);

    // deleteNode(tail,3);

    // print(tail);

    if(isCircular(tail)){
        cout<<"circular hai "<<endl;
    }
    else{
        cout<<"circular nhi hai "<<endl;
    }
    
    return 0;
}