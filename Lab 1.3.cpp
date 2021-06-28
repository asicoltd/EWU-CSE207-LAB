#include<iostream>
using namespace std;
struct prime{
    int range1;
    int range2;
    int counter;
    int *num;
};
int* primeCatcher(prime p);
int main(){
prime prm;

cout << "First number: ";
cin >> prm.range1;
cout << "Last number: ";
cin >> prm.range2;
int* primeNumbers = primeCatcher(prm);
for( int i = 0 ; ; i++ ){
    if( *(primeNumbers+i) < prm.range1 || *(primeNumbers+i) > prm.range2 )break;
    cout << *(primeNumbers+i) << endl;

}
delete []primeNumbers;
return 0;
}
int* primeCatcher(prime p){
    p.counter = 0;
    p.num = new int[p.range2-p.range1];
    for( int i = p.range1 ; i < p.range2 ;i++){
        int flag = 0;
        for( int j = 2 ; j < i ; j++ ){
            if( i % j == 0){
                flag = 1;
                break;
            }
        }
        if( flag == 0 ){
            p.num[p.counter] = i;
            p.counter++;
        }
    }
    return p.num;
}
