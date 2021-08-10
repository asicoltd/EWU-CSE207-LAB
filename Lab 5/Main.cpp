#include"BST.h"
using namespace std;
int main() {
    BST* tree = new BST();
    int data[] = {128, 32, 512, 16, 64, 256, 1024};
    for(int i = 0 ; i < 7 ; i++ )
        tree -> root = tree -> insert(tree -> root, data[i]);
    while(true) {
        cout <<endl<<"1.Insert data" << endl
             <<"2.Search data" << endl
             <<"3.Traversal data" << endl
             <<"4.Delete data" << endl
             <<"5.Find max and min data"<< endl
             <<"0.Exit"<< endl;
        int option;
        cin >> option;
        if( option == 1 ) {
            cout <<"Enter data to insert in BST :";
            int data;
            cin >> data;
            tree -> root = tree -> insert(tree -> root, data);
        } else if( option == 2) {
            if(tree -> root == NULL ) {
                cout << "BST is still empty" << endl;
            } else {
                cout <<"Enter data to search in BST :";
                int data;
                cin >> data;
                if( tree -> search(data)!= NULL ) {
                    cout << data << " found in BST" << endl;
                } else cout << data << " not found in BST" << endl;
            }
        } else if( option == 3) {
            cout <<"1.Pre order traversal of BST"<<endl
                 <<"2.Post order traversal of BST"<<endl
                 <<"3.In order traversal of BST"<<endl;
                 int option1;
                 cin >> option1;
                 if( option1 == 1 )tree -> Preorder( tree -> root );
                 else if( option1 == 2 )tree -> Postorder( tree -> root );
                 else if( option1 == 3 )tree -> Inorder( tree -> root );
        } else if( option == 4) {

        } else if( option == 5) {
            cout <<"1.Find largest value of BST"<<endl
                 <<"2.Find smallest value of BST"<<endl;
                 int option1;
                 cin >> option1;
                 if( option1 == 1 )cout << tree -> findMax()<< " is the largest value" << endl;
                 else if( option1 == 2 )cout << tree -> findMin()<< " is the smallest value" << endl;
        } else if( option == 0)break;
    }

}
//34 23 12 345 234 123
