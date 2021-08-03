#include"Node.h"
template <typename T>
#define MAX 1000
class Stack {
  public:

    Node<T> *head= NULL;
    Node<T> *newdata= NULL;
    int count = 0;
    void push( T item ) {
        newdata = new Node<T>(item) ;
        if(head==NULL) {
            head = newdata;
        } else {
            Node <T> *temp = head;
            head = newdata;
            newdata -> next = temp;
        }
        count++;
    }
    T pop(){
        if( count > 0 ){
           Node<T> *temp = head -> next;
           T popOut = head -> data;
           delete head;
           head = temp;
           count--;
           return popOut;
        }
           else{
            cout << "Stack is empty" << endl;
           }
    }
    int Count(){
        return count;
    }
    T top(){
        if( head != NULL)
        return head -> data;
        else return NULL;
    }
    T allData(){
        if( head != NULL){
        Node<T> *temp = head;
        cout << temp -> data;
        while( temp -> next != NULL ){
            cout << temp -> next -> data;
            temp = temp -> next;
        }
    }
    else return NULL;
    }
};
