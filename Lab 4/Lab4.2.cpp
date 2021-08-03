#include "Stack.h"
int main(){
    Stack <int> *binary = new Stack <int>;
    int number;
    cout << "Enter a decimal number: ";
    cin >> number;
    while( number > 0){
        binary -> push(number % 2);
        number /= 2;
    }
    cout << "Binary of the number is ";
    while( binary -> Count()){
        cout << binary -> pop();
    }
}
