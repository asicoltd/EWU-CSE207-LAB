#include "Stack.h"
int main(){
    Stack <int> *sourceStack = new Stack <int>;
    Stack <int> *tempStack = new Stack <int>;
    Stack <int> *copyStack = new Stack <int>;
    int data;
    cout << "Enter data to copy\nPress 0 for exit" << endl;
    while( true ){
        cin >> data;
        if( data == 0 )break;
        sourceStack -> push(data);
    }
    cout << "\nTemporary stack:";
    while( sourceStack -> Count() ){
        data = sourceStack -> pop();
        tempStack -> push(data);
        cout << data <<" ";
    }
    cout << "\nCopied stack:";
    while(tempStack -> Count() ){
       data = tempStack -> pop();
       copyStack -> push(data);
        cout << data << " ";
    }
}
