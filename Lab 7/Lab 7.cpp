#include<bits/stdc++.h>
using namespace std;
class Node {
  public:
    int data;
    Node *next;
    Node(int data) {
        this->data = data;
        next= NULL;
    }
};
class Graph {
  public:
    Node* NodeList[1000];
    int total = 0;
    Node *newdata= NULL;

    void create(int i, int n) {      // Insert data in last
        newdata = new Node(i);
        if(NodeList[n]==NULL) {
            newdata -> data = n;
            NodeList[n] = newdata;
            NodeList[n] -> next = new Node(i);
            total++;
        } else {
            Node *temp = NodeList[n];
            while(temp -> next != NULL ) {
                temp = temp -> next;
            }
            temp -> next = newdata;
            newdata -> next = NULL;
        }
    }
    void addEdge(int i, int j) {
        if( NodeList[i] == NULL ) {
            cout << "No Vertex found for " << i << endl;
        } else {
            Node* temp = NodeList[i];
            while(temp -> next != NULL ) {
                temp = temp -> next;
            }
            temp -> next = new Node(j);
            temp -> next -> next = NULL;
        }
    }
    void display() {
        for( int i = 0 ; i < total ; i++ ) {
            Node* temp = NodeList[i];
            cout << i << ": ";
            while( temp -> next != NULL ) {
                cout << temp -> next -> data << "->";
                temp = temp -> next;
            }
            cout << endl;

        }
    }
    void deleteVertex( int n, int i ){
        Node* temp = NodeList[n];
        while( temp -> next != NULL ){
            if( temp -> next -> data == i ){
                if( temp -> next -> next != NULL)
                temp = temp -> next -> next;
                else temp -> next  = NULL;
            }
            temp = temp -> next;
        }
        Node* temp1 = NodeList[i];
        while( temp1 -> next != NULL ){
            if( temp1 -> next -> data == n ){
                if( temp1 -> next -> next != NULL)
                temp1 = temp1 -> next -> next;
                else temp1 -> next  = NULL;
            }
            temp1 = temp1 -> next;
        }
    }
};
int main() {
    Graph* g1 = new Graph();
    int option, n;
    //Matrix form
    int arr[100][100];
    while( true ) {
        cout
                <<"1.Create a graph" << endl
                <<"2.Display graph" << endl
                <<"3.Add a edge between 2 verticle" << endl
                <<"4.Create a new vertex" << endl
                <<"5.delete a edge" << endl
                <<"6.delete a vertex" << endl
                <<"7.Exit program" << endl;
        cin >> option;
        if( option == 1 ) {
            n;
            cout << "Number of nodes :";
            cin >> n;
            for( int i = 0 ; i < n ; i++ ){
                for( int j = 0 ; j < n ; j++ ){
                    arr[i][j] = 0;
                }
            }
            for( int i = 0 ; i < n ; i++ ) {
                cout <<"Enter -1 to end " << endl;
                cout << i <<" node is connected to ( 0 - " <<n-1<<"):" ;
                int nodes, vertex[n];
                cin >> nodes;
                for(int j = 0; nodes != -1 ; j++ ) {
                    if( nodes  < n ) {
                        vertex[j] = nodes;
                        //Matrix form
                        arr[i][nodes] = 1;
                        g1 -> create(nodes, i);
                    } else cout << "Please enter less than "<< n <<endl;
                    cin >> nodes;
                }
            }
        } else if( option == 2 ) {
            cout << "Showing in Link list form:\n";
            g1 -> display();
            //Matrix form
            cout << "Showing in matrix form:\n";
            for( int i = 0 ; i < n ; i++ ){
                cout << i <<":";
                for( int j = 0 ; j < n ; j++ ){
                    cout << arr[i][j] << " ";
                }
                cout << endl;
            }
        } else if( option == 3 ) {
            int i, j;
            cout << "First vertex: ";
            cin >> i;
            cout << "Second vertex: ";
            cin >> j;
            g1 -> addEdge(i, j);
            //Matrix form
            arr[i][j] = 1;
            arr[j][i] = 1;
        } else if( option == 4 ) {
            cout << "Vertex number: ";
            int i;
            cin >> i;
            int n = ++g1 -> total;
            cout <<"Enter -1 to end " << endl;
            cout << i <<" node is connected to ( 0 - " <<n-1<<"):" ;
            int nodes, vertex[n];
            cin >> nodes;
            for(int j = 0; nodes != -1 ; j++ ) {
                if( nodes  < n ) {
                    vertex[j] = nodes;
                    //Matrix form
                    arr[i][j] = nodes;
                    g1 -> create(nodes, i);
                } else cout << "Please enter less than "<< n <<endl;
                cin >> nodes;
            }
        }
        else if( option == 5 ){
                int i, j;
            cout << "Delete edge between : ";
            cin >> i >> j;
            g1 -> deleteVertex(i,j);
            //Matrix form
            arr[i][j] = 0;
            arr[j][i] = 0;
        }
        else if( option == 6 ){
            cout << "Delete vertex number: ";
            int x;
            cin >> x;
            g1 -> NodeList[x] = NULL;
            //Matrix form
            n--;
            for( int i = 0 ; i < n ; i++ )
            arr[n][i] = 0;
        }
        else if( option == 7 )break;
    }
}
