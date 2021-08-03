#include"Stack.h"
int isParenthesis(char x) { //Check if character is Parenthesis
    if( x == '[' || x == ']' ) {
        return 3;
    } else if( x == '{' || x == '}' ) {
        return 2;
    } else if( x == '(' || x == ')' ) {
        return 1;
    } else return 0;
}
int isOpen( char x ) { //Check if Parenthesis open or closed
    return ( x == '[' || x == '{' || x == '(' );
}
int main() {
    Stack <char> *s = new Stack <char>;
    bool flag = true;
    int count1 = 0,count2 = 0,count3 = 0;
    string infix;
    cin >> infix;
    for( int i = 0 ; i < infix.size() ; i++ ) {
        if(isParenthesis( infix[i] ) > 0 ) {
            if(isOpen(infix[i])) {
                s -> push(infix[i]);
                if( infix[i] == '(' )count1++;
                else if( infix[i] == '{' )count2++;
                else if( infix[i] == '[' )count3++;
            } else {
                if( s -> Count() == 0 ) {
                    cout << "Closing Parenthesis used without open Parenthesis\n";
                    flag = false;
                    break;
                }
                else if(isParenthesis(infix[i]) != isParenthesis( s -> top())) {
                    cout << "Wrong placement of Parenthesis\n";
                    flag = false;
                    break;
                }
                 else {
                    s -> pop();
                    if( infix[i] == ')' )count1--;
                    else if( infix[i] == '}' )count2--;
                    else if( infix[i] == ']' )count3--;
                }
            }
        }
    }
    if( count1 + count2 + count3 != 0){
            flag = false;
            cout << "Equation ends without closing Parenthesis\n";
    }
    if( flag == true ) {
        cout << "Parenthesis used correctly\n";
    }
}
