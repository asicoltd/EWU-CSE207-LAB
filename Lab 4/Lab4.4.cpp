#include "Stack.h"
int opPres(char x) { //Operator precedence
    if( x == '^' ) {
        return 3;
    } else if( x == '*' || x == '/') {
        return 2;
    } else if( x == '-' || x == '+') {
        return 1;
    } else return 0;
}
int main() {
    Stack <char> *s = new Stack <char>;
    string infix;
    cin >> infix;
    for( int i = 0 ; i < infix.size() ; i++ ) {
        if(( infix[i] >= 'A' && infix[i] <= 'Z')||( infix[i] >= 'a' && infix[i] <= 'z')) {
            cout << infix[i];
        } else {
            if(s -> Count() == 0 ) {
                s -> push(infix[i]);

            } else {
                if( infix[i] == '(' || infix[i] == '{' || infix[i] == '[' ) {
                    s -> push(infix[i]);

                } else if( infix[i] == ')' ) {
                    while( s -> top() != '(' ) {
                        cout << s -> pop();
                    }
                    s -> pop();

                } else if( infix[i] == '}' ) {
                    while( s -> top() != '{' ) {
                        cout << s -> pop();
                    }
                    s -> pop();

                } else if( infix[i] == ']' ) {
                    while( s -> top() != '[' ) {
                        cout << s -> pop();
                    }
                    s -> pop();

                } else {
                    if( opPres(infix[i]) > opPres(s -> top()) ) {
                        s -> push(infix[i]);

                    } else {
                        while(opPres(infix[i]) <= opPres(s -> top()) && s -> Count() != 0 && opPres(infix[i]) > 0) {
                            cout << s -> pop();
                        }
                        s -> push(infix[i]);
                    }
                }
            }
        }
    }
    while( s -> Count() ) {
        cout << s -> pop();
    }

}
