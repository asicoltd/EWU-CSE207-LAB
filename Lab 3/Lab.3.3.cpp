#include "Queue.h"
int main(){
    Queue* queueMain = new Queue();
    int temp;
    for( int i = 0 ; i < 5 ; i++ ){
    cin >> temp;
    queueMain -> enque(temp);
    }
    for( int i = 0 ; i < 5 ; i++ ){
    if( queueMain -> show() >= 0){
    temp = queueMain -> show();
    queueMain -> deque();
    queueMain -> enque(temp);
    }
    else{
    queueMain -> deque();
    }
    }
    queueMain -> showAll();
}
