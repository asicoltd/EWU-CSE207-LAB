#include <iostream>
using namespace std;
class Heap {
#define MAX 1000
  public:
    int arr[MAX];
    int count = 0;
    void heapify(int i) {
        int parent = (i - 1) / 2;
        if (arr[parent] > 0) {
            if (arr[i] > arr[parent]) {
                swap(arr[i], arr[parent]);
                heapify(parent);
            }
        }
    }
    void swap( int &x, int &y ) {
        int temp;
        temp = x;
        x = y;
        y = temp;
    }
    void insertNode(int Key) {
        count++;
        arr[count - 1] = Key;
        heapify(count - 1);
    }
    void deleteRoot() {
        int lastElement = arr[count - 1];
        arr[0] = lastElement;
        count = count - 1;
        heapify(0);
    }
    int maxData() {
        int max = arr[0];
        for( int i = 0 ; i < count ; i++ ) {
            if( arr[i] > max ) {
                max = arr[i];
            }
        }
        return max;
    }
    int minData() {
        int min = arr[0];
        for( int i = 0 ; i < count ; i++ ) {
            if( arr[i] < min ) {
                min = arr[i];
            }
        }
        return min;
    }
    void Min_heapify(int arr[], int n, int i) {
        int largest = i;
        int l = 2 * i + 1;
        int r = 2 * i + 2;
        if (l < n && arr[l] > arr[largest])
            largest = l;
        if (r < n && arr[r] > arr[largest])
            largest = r;
        if (largest != i) {
            swap(arr[i], arr[largest]);
            Min_heapify(arr, n, largest);
        }
    }
    void Min_heapSort() {
        for (int i = count / 2 - 1; i >= 0; i--)
            Min_heapify(arr, count, i);
        for (int i = count - 1; i > 0; i--) {
            swap(arr[0], arr[i]);
            Min_heapify(arr, i, 0);
        }
    }
    void printArray() {
        for (int i = 0; i < count; ++i)
            cout << arr[i] << " ";

        cout << "\n";
    }
};
int main() {
    Heap *h1 = new Heap();
    while(1) {
        cout <<"1.Enter a data to heap" << endl;
        cout <<"2.Delete first data from heap" << endl;
        cout <<"3.Get the highest and lowest value from heap" << endl;
        cout <<"4.Max to min heap convert" << endl;
        cout <<"5.To view data" << endl;
        cout <<"6.Exit" << endl;
        int option;
        cin >> option;
        if( option == 1 ) {
            int data;
            cin >> data;
            h1 -> insertNode(data);
        } else if( option == 2 ) {
            h1 -> deleteRoot();
            h1 ->heapify(0);
        } else if( option == 3 ) {
            cout << "Max :" <<h1 -> maxData() << endl;
            cout << "Min :" << h1 -> minData() << endl;
        } else if( option == 4 ) {
            h1 -> Min_heapSort();
        } else if( option == 5 ) {
            h1 -> printArray();
        } else if( option == 6 ) {
            break;
        }
    }
    return 0;
}
