#include<bits/stdc++.h>
#include "Node.h"
using namespace std;

class SLL
{
   public:

       Node *head= NULL;
       Node *newdata= NULL;

       void add(int item)
       {
           newdata = new Node(item);

           if(head==NULL)
           {
              head = newdata;
           }
           else
           {    
               Node *temp = head;
               while(temp -> next != NULL ){
                   temp = temp -> next;
               }
               temp -> next = newdata;
               newdata -> next = NULL;
           }
       }
       void addbegin( int item ){
           newdata = new Node(item);
           if(head==NULL)
           {
              head = newdata;
           }
           else{
               Node* temp = head;
               head = newdata;
               newdata -> next = temp; 
           }
       }
       void addanypos( int pos, int item ){
           if( pos >= size() ){cout << "Position is greater than the size of list" << endl;
           }
           else if( pos == 0 ){
               addbegin(item);
           }
           else{
               Node *temp = head;
           newdata = new Node(item);
           for( int i = 0 ; i < pos-1 ; i++ ){
               temp = temp -> next;
           }
           newdata -> next = temp -> next;
           temp -> next = newdata;
           }
       }
       bool contains( int item ){
           Node *temp = head;
           while( temp != NULL ){
               cout << temp -> data << endl;
               if( temp -> data == item )return true;
               temp = temp -> next;
           }
           return false;
       }
        int size(){
            Node *temp= head;
            int count = 0;
            while(temp!= NULL){
                temp = temp->next;
                count++ ;
          }
          return count;
       }
       bool isEmpty(){
           if(head == NULL)return true;
           else return false;
       }
       int get( int pos ){
           if( pos < 0 || pos >= size()){
                return 0;
           }
           Node* temp = head;
           int count = 0;
           while( temp != NULL ){
               if( count == pos )return temp -> data;
               temp = temp -> next;
               count++;
           }
           return 0;
       }
       int indexOf( int item ){
           Node* temp = head;
           int count = 0;
           while( temp != NULL ){
               if( temp -> data == item )return count;
               count++;
               temp = temp -> next;
           }
           return -1;
       }
       
       void removefirst(){
           Node* temp = head -> next;
           delete head;
           head = temp;

       }
       void removelast(){
           Node* temp = head;
           for( int i = 0 ; i < size()-2 ; i++){
               temp = temp -> next;
           }
           delete temp -> next;
            temp ->next = NULL;
       }
        int remove( int pos ){
           Node* temp = head;
           int deletedData = 0;
           int count = 0;
           if( pos == 0 ){
               deletedData = temp -> data;
               removefirst();
               return deletedData;
           }
           else if( pos == size()-1){
               deletedData = get(size()-1);
               removelast();
               return deletedData;
           }
           else if( pos >= size())return 0;
           else{
           for( int i = 0 ; i < pos-1 ; i++){
               temp = temp -> next;
           }
           deletedData = temp->next-> data;
           Node* temp1 = temp -> next -> next;
           delete temp -> next;
            temp -> next = temp1;
            return deletedData;
           }
        }
        void reverse(){
            Node* tempPrev = NULL;
            Node* tempNext = NULL;
            Node* temp = head;
            while( temp != NULL ){
                tempNext = temp -> next;
                temp -> next = tempPrev;
                tempPrev = temp;
                temp = tempNext;
            }
            head = tempPrev;

        }
        void sort(){
            Node *temp = head;
            Node *temp1 = head;
            while( temp -> next != NULL ){
                temp1 = head;
                while( temp1 -> next != NULL ){
                if( temp1 -> data > temp1 -> next -> data ){
                    swap(temp1  ,temp1 -> next);
                }
                temp1 = temp1 -> next;
                }
                temp = temp -> next;
            }
        }
       void display()
       {
          Node *temp= head;
          while(temp!= NULL)
          {
              cout<<temp->data<<"-> ";
              temp= temp->next;
          }
          cout<<endl;
       }
       void swap(Node *n1, Node *n2){
           int swap = n1 -> data;
           n1 -> data = n2 ->data;
           n2 ->data = swap;
       }
      
};