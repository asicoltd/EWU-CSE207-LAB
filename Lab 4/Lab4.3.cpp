#include "Stack.h"
Stack<int> reverseStack(Stack<int> *s1 ){
    int data;
    Stack <int> *tempStack = new Stack <int>;
    while( s1 -> Count() ){
        data = s1 -> pop();
        tempStack -> push(data);
        cout << data <<" ";
    }
    return *tempStack;
}
int main(){
    Stack <int> *sourceStack = new Stack <int>;
    int data;
    cout << "Enter data to copy\nPress 0 for exit" << endl;
    while( true ){
        cin >> data;
        if( data == 0 )break;
        sourceStack -> push(data);
    }
    cout << "\nReversed stack  :";
    *sourceStack = reverseStack(sourceStack);
}
