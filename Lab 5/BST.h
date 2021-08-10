#include"Node.h"
using namespace std;
class BST {
  public:
    Node* root = NULL;
    Node* newData = new Node();
    Node* insert(Node* root, int data ) {
        Node* temp = root;
        if( temp == NULL ) {
            root = new Node(data);
        } else {
            while( temp != NULL ) {
                if( temp -> data > data ) {
                    if( temp -> left != NULL ) {
                        temp = temp -> left;
                    } else {
                        temp -> left = new Node(data);
                        return root;
                    }
                } else {
                    if( temp -> right != NULL ) {
                        temp = temp -> right;
                    } else {
                        temp -> right = new Node(data);
                        return root;
                    }
                }
            }
        }
        return root;
    }
    Node* search( int data ) {
        Node* temp = root;
        while( temp != NULL ) {
            if( temp -> data == data )break;
            else if(temp -> data > data ) {
                temp = temp -> left;
            } else temp = temp -> right;
        }
        return temp;
    }
    void Preorder( Node* root ) {
        if (root == NULL)return;
        cout << root->data << " ";
        Postorder(root->left);
        Postorder(root->right);

    }
    void Postorder( Node* root ) {
        if (root == NULL)return;
        Postorder(root->left);
        Postorder(root->right);
        cout << root->data << " ";
    }
    void Inorder( Node* root ) {
        if (root == NULL)return;
        Postorder(root->left);
        cout << root->data << " ";
        Postorder(root->right);
    }
    int deleteNode( int value ) {
        if(search(value) != NULL) {
            Node* temp = search(value);
            if( temp -> left != NULL && temp -> right != NULL ){

            }
            else if( temp -> left != NULL || temp -> right != NULL ){
                if( temp -> left != NULL ){
                    Node* temp1 = temp -> left;
                    delete temp;
                    temp = temp1;
                }
                else{
                    Node* temp1 = temp -> right;
                    delete temp;
                    temp = temp1;
                }
            }
            else{
                    delete temp;
            }
            return 1;
        } else {
            return 0;
        }

    }
    int findMax() {
        if( this -> root == NULL ) {
            return 0;
        } else {
            Node* temp = this -> root;
            while( temp -> right != NULL ) {
                temp = temp -> right;
            }
            return temp -> data;
        }
    }
    int findMin() {
        if( this -> root == NULL ) {
            return 0;
        } else {
            Node* temp = this -> root;
            while( temp -> left != NULL ) {
                temp = temp -> left;
            }
            return temp -> data;
        }
    }

};
