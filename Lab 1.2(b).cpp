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
    int total;
    cout << "How many product want to entry ??" << endl;
    cin >> total;
    product *P = new product[total*sizeof(product)] ;
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
        P++;
    }
    P = P-total;
    string typeName;
    cout << "Enter type" << endl;
    cin >> typeName;
    int typeQty = 0;
    for( int i = 0 ; i < total ; i++ )
    {
        if( typeName == P -> type )
        {
            typeQty += P -> quantity;
        }
        P++;

    }
    cout << "Total asset of type " << typeName << " is " << typeQty;
    P = P-total;
    delete []P;
    return 0;
}
