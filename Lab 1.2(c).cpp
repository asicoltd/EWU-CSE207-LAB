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
        cin >> (P+i) -> id;
        cout << "Name:";
        cin >> (P+i) -> name;
        cout << "Brand name:";
        cin >> (P+i) -> brand_name;
        cout << "Type:";
        cin >> (P+i) -> type;
        cout << "Quantity:";
        cin >> (P+i) -> quantity;
        cout << "Price:";
        cin >> (P+i) -> price;

    }
    //P = P-total;
    string typeName;
    int totalQty = 0;
    for( int i = 0 ; i < total ; i++ )
    {
        totalQty += (P+i) -> quantity;
    }
    cout << "Total asset is " << totalQty;
    delete []P;
    return 0;
}
