#include "Queue.h"
int main() {
    Queue* queueMain = new Queue();
    Queue* queueCopy = new Queue();
    int temp, flag = 0;
    for( int i = 0 ; i < 5 ; i++ ) {
        cin >> temp;
        queueMain -> enque(temp);
    }
    cout << "Group1: ";
    for( int i = 0 ; i < 5 ; i++ ) {
        if( queueMain -> show() < 18){
        cout << queueMain -> show() << " ";
        flag = 1;
        }
            temp = queueMain -> show();
            temp = queueMain -> show();
            queueMain -> deque();
            queueMain -> enque(temp);
            flag = 1;

    }
    if( flag == 0 )cout << "NULL" << endl;
    else {
    cout << endl;
    flag = 0;
    }
    cout << "Group2: ";
    for( int i = 0 ; i < 5 ; i++ ) {
        if( queueMain -> show() >= 18 && queueMain -> show() <= 35 ){
        cout << queueMain -> show() << " ";
        flag = 1;
        }
            temp = queueMain -> show();
            temp = queueMain -> show();
            queueMain -> deque();
            queueMain -> enque(temp);
            flag = 1;
    }
    if( flag == 0 )cout << "NULL" << endl;
    else {
    cout << endl;
    flag = 0;
    }
    cout << "Group3: ";
    for( int i = 0 ; i < 5 ; i++ ) {
        if( queueMain -> show() >= 36 && queueMain -> show() <= 45 ){cout << queueMain -> show() << " ";
        flag = 1;
        }
            temp = queueMain -> show();
            temp = queueMain -> show();
            queueMain -> deque();
            queueMain -> enque(temp);
            flag = 1;

    }
    if( flag == 0 )cout << "NULL" << endl;
    else {
    cout << endl;
    flag = 0;
    }
    cout << "Group4: ";
    for( int i = 0 ; i < 5 ; i++ ) {
        if( queueMain -> show() >= 46 ){
        cout << queueMain -> show() << " ";
        flag = 1;
        }
            temp = queueMain -> show();
            queueMain -> deque();
            queueMain -> enque(temp);
    }
    if( flag == 0 )cout << "NULL" << endl;
    else {
    cout << endl;
    flag = 0;
    }
}
