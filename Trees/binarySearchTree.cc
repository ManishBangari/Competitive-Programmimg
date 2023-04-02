#include<iostream>
using namespace std;

struct BSTnode{                 // Structure of the tree.
    int data;
    BSTnode *right;
    BSTnode *left;
};

BSTnode* getNewNode(int data){              // New Node

    BSTnode* newnode = new BSTnode();
    newnode -> data = data;
    newnode -> left = NULL;
    newnode -> right = NULL;

    return newnode;
}
 
bool bstSearch(BSTnode* root,int data){         // Searching data in BST

    if(root==NULL) return false;
    else if(root->data==data)  return true;
    else if(data<=root->data) return bstSearch(root->left,data);
    else return bstSearch(root->right,data);
}

BSTnode* bstInsert(BSTnode* root,int data){         // Inserting data in BST

    if(root==NULL)  {   root = getNewNode(data);    }
    else if(data <= root->data) { root->left=bstInsert(root->left,data); }
    else{   root->right=bstInsert(root->right,data);    }

    return root;
}

int bstMin(BSTnode* root){              // Finding minimum in BST

    BSTnode* currentNode = root;

    if(root==NULL)  {   cout<<"tree is empty\n"; return -1; }    
    while(currentNode->left!=NULL){
        currentNode = currentNode->left;
    }
        return currentNode->data;
}

int bstMax(BSTnode* root){              // Finding maximum in BST

    BSTnode* currentNode = root;

    if(root==NULL)  {   cout<<"tree is empty\n"; return -1; }    
    while(currentNode->right!=NULL){
        currentNode = currentNode->right;
    }
        return currentNode->data;
}

int bstHeight(BSTnode* root){           // Height of BST
         
    if (root == NULL)   return 0;
    else {    
        left_height = tree_height(root->left);
        right_height = tree_height(root->right);
         
        return max(left_height, right_height) + 1;
    }
}

int main(){

    BSTnode* root = NULL;

    root = bstInsert(root,30);
    root = bstInsert(root,20);
    root = bstInsert(root,50);
    root = bstInsert(root,10);
    root = bstInsert(root,35);
    root = bstInsert(root,15);
    root = bstInsert(root,40);

    if(bstSearch(root,10)==true)    cout<<"Found\n"; else   cout<<"Not Found\n";
    if(bstSearch(root,25)==true)    cout<<"Found\n"; else   cout<<"Not Found\n";

    int minBst = bstMin(root);
    cout<<"Minimum data value in the BST is "<<minBst<<"\n";

    int maxBst = bstMax(root);
    cout<<"Maximum data value in the BST is "<<maxBst<<"\n";

    return 0;
}