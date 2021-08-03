#include<iostream>
using namespace std;
int main()
{
    struct product
    {
        int id;
        string name;
        string brand_name;
        string type;
        int quantity;
        double price;
    };
    int total; // total input that user will provide
    cout << "How many product want to entry ??" << endl;
    cin >> total;
    product P[total] ; // Initializing Pointer P
    for( int i = 0 ; i < total ; i++ )
    {
        cout << "For product no:" << i+1 << endl;
        cout << "ID:";
        cin >> P[i].id;
        cout << "Name:";
        cin >> P[i].name;
        cout << "Brand name:";
        cin >> P[i].brand_name;
        cout << "Type:";
        cin >> P[i].type;
        cout << "Quantity:";
        cin >> P[i].quantity;
        cout << "Price:";
        cin >> P[i].price;
    }
    for( int i = 0 ; i < total ; i++ )
    {
        if( P[i].price > 40.0 ) // if the price is more than 40 it will print the product name and price
        {
            cout << "Product name:" << P[i].name << endl << "Price:" << P[i].price << endl;
        }
    }
    return 0;
}
