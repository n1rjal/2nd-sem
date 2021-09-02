#include <iostream>
using namespace std;

class Node{
    private:
        int data;
        Node *next;
        friend int getData(Node const &n);
        friend class NodeFriend;
    public:
        Node(int data){
            this->data = data;
            this->next = NULL;
        }
};

class NodeFriend{
    public:
        static int getData(Node const &n){
            return n.data;
        }
};


int getData(Node const &n){
    return n.data;
}

int main(){
    Node n(10);
    cout << getData(n) << endl;
    cout << NodeFriend::getData(n) << endl;
}