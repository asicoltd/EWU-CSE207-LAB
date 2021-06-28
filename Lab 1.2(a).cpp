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
    string brandName;
    cout << "Enter brand name" << endl;
    cin >> brandName;
    for( int i = 0 ; i < total ; i++ )
    {
        if( brandName == P -> brand_name )
        {
            cout << "ID:";
            cout << P -> id << endl;
            cout << "Name:";
            cout << P -> name << endl;
            cout << "Brand name:";
            cout << P -> brand_name << endl;
            cout << "Type:";
            cout << P -> type << endl;
            cout << "Quantity:";
            cout << P -> quantity << endl;
            cout << "Price:";
            cout << P -> price << endl;
        }
        P++;

    }
    P = P-total;
    delete []P;
    return 0;
}
