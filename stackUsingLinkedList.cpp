#include <iostream>
using namespace std;
struct node {
    int x;
    node *nextNode;
};
class myStack {
    public:
        myStack();
        void push(int);
        int pop();
        void display();
    private:
        node *startingNode;
};
int main() {
    myStack s = myStack();
    cout<<"Pushing 1"<<endl;
    s.push(1);
    s.display();
    cout<<"Pushing 2"<<endl;
    s.push(2);
    s.display();
    cout<<"Pushing 3"<<endl;
    s.push(3);
    s.display();
    cout<<"First Pop: "<<s.pop()<<endl;
    s.display();
    cout<<"Second Pop: "<<s.pop()<<endl;
    s.display();
    cout<<"Third Pop: "<<s.pop()<<endl;
    s.display();
    return 0;
}
myStack::myStack() {
    myStack::startingNode = nullptr;
}
void myStack::push(int x) {
    node *n = new node;
    n->x = x;
    n->nextNode = nullptr;
    if(myStack::startingNode == nullptr) {
        startingNode = n;
    }
    else {
        node *currentNode = myStack::startingNode;
        while(true) {
            if(currentNode->nextNode == nullptr) {
                currentNode->nextNode = n;
                break;
            }
            currentNode = currentNode->nextNode;
        }
    }
}
int myStack::pop() {
    int requiredValue;
    if(myStack::startingNode->nextNode == nullptr) {
        requiredValue = myStack::startingNode->x;
        delete myStack::startingNode;
        myStack::startingNode = nullptr;
    }
    else {
        node *currentNode = myStack::startingNode;
        while(true) {
            if(currentNode->nextNode->nextNode == nullptr) {
                requiredValue = currentNode->nextNode->x;
                delete currentNode->nextNode;
                currentNode->nextNode = nullptr;
                break;
            }
            currentNode = currentNode->nextNode;
        }
    }
    return requiredValue;
}
void myStack::display() {
    if(myStack::startingNode != nullptr) {
        node *currentNode = myStack::startingNode;
        while(true) {
            cout<<currentNode->x<<" ";
            if(currentNode->nextNode == nullptr)
                break;
            currentNode = currentNode->nextNode;
        }
    }
    else {
        cout<<"Empty Stack";
    }
    cout<<endl<<endl;
}
