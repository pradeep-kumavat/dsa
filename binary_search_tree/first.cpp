#include<iostream>
#include<queue>
#include<climits>
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

pair<int,int> getMinMax(Node* root){
    Node* temp = root;
    if(temp == NULL){
        return {-1, -1};
    }
    
    while(temp->left != NULL){
        temp = temp->left;
    }
    int minVal = temp->data;
    temp = root;

    while(temp->right != NULL){
        temp = temp->right;
    }
    int maxVal = temp->data;

    return {minVal, maxVal};
}

// delete a node from bst
Node* deleteNode(Node* root, int key){
    if(root == NULL){
        return NULL;
    }

    if(root->data == key){
        if(root->left == NULL && root->right == NULL){
            delete root;
            return NULL;
        }
        else if(root->right == NULL){
            Node* temp = root->left;
            delete root;
            return temp;
        }
        else if(root->left == NULL){
            Node* temp = root->right;
            delete root;
            return temp;
        }
        else{
            Node* temp = root->right;
            while(temp->left != NULL){
                temp = temp->left;
            }
            root->data = temp->data;
            root->right = deleteNode(root->right, temp->data);
            return root;
        }
    }
    else if(root->data > key){
        root->left = deleteNode(root->left, key);
        return root;
    }
    else{
        root->right = deleteNode(root->right, key);
        return root;
    }
}


int main(){

    Node* root = NULL;

    cout<<"enter the data to create BST: ";
    takeInput(root);

    cout<<"Level Order Traversal of bst : "<<endl;
    levelOrderTraversal(root);

    //10 8 21 7 27 5 4 3 -1

    pair<int,int> minMax = getMinMax(root);
    cout<<"Min value in BST: "<<minMax.first<<endl;
    cout<<"Max value in BST: "<<minMax.second<<endl;
    
    int key = 3;
    deleteNode(root, key);
    cout<<"Level Order Traversal of bst after deleting "<<key<<" : "<<endl;
    levelOrderTraversal(root);


    return 0;
}