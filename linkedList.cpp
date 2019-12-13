// Linked List

#include <iostream>
using namespace std;
struct node {
    int x;
    node *nextNode;
};
int main() {
    node n1;
    n1.x = 1;

    node n2;
    n2.x = 2;

    node n3;
    n3.x = 3;

    n1.nextNode = &n2;
    n2.nextNode = &n3;
    n3.nextNode = nullptr;

    node *currentPointer = &n1;
    while(currentPointer != nullptr) {
        cout<<"Traversed node with value: "<<currentPointer->x<<endl;
        currentPointer = currentPointer -> nextNode;
    }
    return 0;
}
