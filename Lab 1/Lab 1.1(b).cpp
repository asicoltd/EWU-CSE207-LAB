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
    product *P = new product[total*sizeof(product)] ; // Initializing Pointer P
    for( int i = 0 ; i < total ; i++ )
    {
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
        P++;          // Going to next location of P until it reach its last size (total)
    }
    P -= total; // Deleting Total to get the last value of P
    for( int i = 0 ; i < total ; i++ )
    {
        if( P -> price > 40.0 ) // if the price is more than 40 it will print the product name and price
        {
            cout << "Product name:" << P -> name << endl << "Price:" << P -> price << endl;
        }
        P++;
    }
    P -= total;
    delete []P;
    return 0;
}
