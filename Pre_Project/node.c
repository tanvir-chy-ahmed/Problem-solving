#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void printList(Node* n) {
    while (n != NULL) {
        cout << n->data << " ";
        n = n->next;
    }
}

int main() {
    // Create nodes
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();

    // Assign data and connect nodes
    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;

    // Print the list
    printList(head);

    return 0;
}

