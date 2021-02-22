#include <iostream>

using std::cin;
using std::cout;
using std::endl;

struct Node {
    int data;
    Node* next;
};

struct LinkedList {
    Node* root;
};

void PushBack (Node* root, int val);
Node* PopFirst(Node* root);
void PrientAll (Node* root);
void Clear (Node* root);

int main(){
    int n, x, val;
    cin >> n;
    Node node;
    LinkedList link;
    link.root = new Node;
    cin >> x;
    node.data = x;
    node.next = new Node;
    *link.root = node;
    for (int i = 1; i < n; i++){
        cin >> x;
        node.next->data = x;
        if (i != n - 1) node.next->next = new Node;
        else node.next->next = 0;
        node = *node.next;
    }
    cin >> val;
    PushBack (link.root, val);
    link.root = PopFirst(link.root);
    PrientAll (link.root);
    Clear (link.root);
    return 0;
}

void PushBack (Node* root, int val){
    Node node;
    node = *root;
    while (true){
        if (node.next->next == 0) break;
        node = *node.next;
    }
    delete node.next->next;
    node.next->next = new Node;
    node = *node.next;
    node.next->data = val;
    node.next->next = 0;
}

Node* PopFirst(Node* root){
    Node node;
    node = *root;
    return node.next;
    delete root;
}

void PrientAll (Node* root){
    Node node;
    cout << root->data << " ";
    node = *root->next;
    while (true){
        cout << node.data << " ";
        node = *node.next;
        if (node.next == 0){
            cout << node.data << endl;
            break;
        }
    }
}

void Clear (Node* root){
    while (root != 0){
        root = PopFirst(root);
    }
    delete root;
}
