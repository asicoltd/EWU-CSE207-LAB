#include<iostream>
using namespace std;
struct prime{           
    int range1;
    int range2;
    int counter;
    int *num;       
};
int* primeCatcher(prime p){        // this function will find the prime from struct and return a pointer
    p.counter = 0;
    p.num = new int[p.range2-p.range1];         // p.num is the array where we will add the prime numbers
    for( int i = p.range1 ; i < p.range2 ;i++){
        int flag = 0;
        for( int j = 2 ; j < i ; j++ ){
            if( i % j == 0){
                flag = 1;
                break;
            }
        }
        if( flag == 0 ){
            p.num[p.counter] = i;       // adding prime numbers in p.num[]
            p.counter++;                // p.counter will count the total number of prime 
        }
    }
    return p.num;       // returning the address of the array 
}

int main(){
prime prm;
    
cout << "First number: ";
cin >> prm.range1;
cout << "Last number: ";
cin >> prm.range2;

int* primeNumbers = primeCatcher(prm); // using the function
for( int i = 0 ; ; i++ ){
    if( *(primeNumbers+i) < prm.range1 || *(primeNumbers+i) > prm.range2 )break; //only values between range1 and range2 will be printed
    cout << *(primeNumbers+i) << endl; //printing the prime numbers

}
delete []primeNumbers; //deleting the dynamic location
return 0;
}
