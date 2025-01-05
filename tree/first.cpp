#include<iostream>
#include<queue>
using namespace std;

class node{
    public:
        int data;
        node* left;
        node* right;
        node(int val){
            this->data = val;
            this->left = NULL;
            this->right = NULL;
        }
};

node* buildTree(){
    int data;
    cout<<"Enter data: ";
    cin>>data;
    if(data == -1){
        return NULL;
    }
    node* root = new node(data);
    cout<<"Enter left child of "<<data<<" : ";
    root->left = buildTree();
    cout<<"Enter right child of "<<data<<" : ";
    root->right = buildTree();
    return root;
}

void preOrderTraversal(node* root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

void inOrderTraversal(node* root){
    if(root == NULL){
        return;
    }
    inOrderTraversal(root->left);
    cout<<root->data<<" ";
    inOrderTraversal(root->right);
}

void postOrderTraversal(node* root){
    if(root == NULL){
        return;
    }
    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout<<root->data<<" ";
}


void levelOrderTraversalByqueue(node* root){
    if(root == NULL){
        return;
    }
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* temp = q.front();
        q.pop();
        if(temp != NULL){
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
        else if(!q.empty()){
            cout<<endl;
            q.push(NULL);
        }
    }
}

void buildFromLevelOrder(node* &root){
    queue<node*> q;
    cout<<"Enter root data: ";
    int data;
    cin>>data;
    root = new node(data);
    q.push(root);
    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        cout<<"Enter left child of "<<temp->data<<" : ";
        int leftData;
        cin>>leftData;
        if(leftData != -1){
            temp->left = new node(leftData);
            q.push(temp->left);
        }

        cout<<"Enter right child of "<<temp->data<<" : ";
        int rightData;
        cin>>rightData;
        if(rightData != -1){
            temp->right = new node(rightData);
            q.push(temp->right);
        }
    }
}

int main(){
    node* root = NULL;
    // root = buildTree();

    // cout<<"printing level order traversal: "<<endl;
    // levelOrderTraversalByqueue(root);
    // cout<<endl;

    // cout<<"printing inOrder traversal: ";
    // inOrderTraversal(root);
    // cout<<endl;

    // cout<<"printing preOrder traversal: ";
    // preOrderTraversal(root);
    // cout<<endl;

    // cout<<"printing postorder traversal: ";
    // postOrderTraversal(root);
    // cout<<endl;

    buildFromLevelOrder(root);
    cout<<"printing level order traversal: "<<endl;
    levelOrderTraversalByqueue(root);

    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 example input

    return 0;
}