#include<iostream>
#include<queue>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;

        Node(int val){
            this->data = val;
            this->left = NULL;
            this->right = NULL;
        }
};

void levelOrderTraversal(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();
        if(temp == NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }  
        }
    }
}

Node* insertIntoBst(Node* root, int data){
    if(root == NULL){
        root = new Node(data);
        return root;
    }

    if(data < root->data){
        root->left = insertIntoBst(root->left, data);
    }else{
        root->right = insertIntoBst(root->right, data);
    }

    return root;
}         

void takeInput(Node* &root){
    int data;
    cin>>data;
    while(data != -1){
        root = insertIntoBst(root, data);
        cin>>data; 
    }
}


int main(){

    Node* root = NULL;

    cout<<"enter the data to create BST: ";
    takeInput(root);

    cout<<"Level Order Traversal of bst : "<<endl;
    levelOrderTraversal(root);

    //10 8 21 7 27 5 4 3 -1


    return 0;
}