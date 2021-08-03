#include<bits/stdc++.h>
using namespace std;
template <typename T>
class Node {
  public:
    T data;
    Node *next;
    Node(T data) {
        this->data = data;
        next= NULL;
    }
};
