#include<iostream>
using namespace std;
int main(){
struct product{
    int id;
    string name;
    string brand_name;
    string type;
    int quantity;
    double price;
};
int total;
cout << "How many product want to entry ??" << endl;
cin >> total;
product *P = new product[total*sizeof(product)] ;
for( int i = 0 ; i < total ; i++ ){
    cout << "For product no:" << i+1 << endl;
    cout << "ID:";
    cin >> P -> id;
    cout << "Name:";
    cin >> P -> name;
    cout << "Brand name:";
    cin >> P -> brand_name;
    cout << "Type:";
    cin >> P -> type;
    cout << "Quantity:";
    cin >> P -> quantity;
    cout << "Price:";
    cin >> P -> price;
    P++;
}
 P = P-total;
for( int i = 0 ; i < total ; i++ ){
    if( P -> price > 40.0 ){
        cout << "Product name:" << P -> name << endl << "Price:" << P -> price << endl;
    }
    P++;
}
}
