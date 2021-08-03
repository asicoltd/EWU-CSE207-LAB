#include "Queue.h"
int main(){
    Queue* queueMain = new Queue();
    Queue* queueCopy = new Queue();
    int temp;
    for( int i = 0 ; i < 5 ; i++ ){
    cin >> temp;
    queueMain -> enque(temp);
    }
    for( int i = 0 ; i < queueMain -> size() ; i++ ){
    queueCopy -> enque( queueMain -> show() );
    temp = queueMain -> show();
    queueMain -> deque();
    queueMain -> enque(temp);
    }
    queueCopy -> showAll();
}
