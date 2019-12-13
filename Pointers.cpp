// Pointers

#include <iostream>
using namespace std;
/*
int main() {
    int x = 10;
    int *p = &x;
    cout<<"X: "<<*p<<endl;
    cout<<"Address of X, which is stored in P: "<<p<<endl;
    return 0;
}
*/
/*
struct node {
    int x;
};
int main() {
    node n1;
    n1.x = 10;

    node *p = &n1;

    cout<<"X using dot: "<<n1.x<<endl;
    cout<<"X using arrow: "<<p->x<<endl;
    cout<<"X using asterisk: "<<(*p).x<<endl;

    return 0;
}
*/
class Parent {
    public:
        Parent(){}
        ~Parent(){}
        virtual void print() { cout<<"Parent Function."<<endl; }
};
class Child1 : public Parent {
    public:
        Child1(){}
        ~Child1(){}
        void print() { cout<<"Child 1 Function."<<endl; }
};
class Child2 : public Parent {
    public:
        Child2(){}
        ~Child2(){}
        void print() { cout<<"Child 2 Function."<<endl; }
};
int main() {
    Parent parent_obj;
    Child1 child1_obj;
    Child2 child2_obj;

    Parent *parent_ptr;
    Child1 *child1_ptr;
    Child2 *child2_ptr;

    parent_ptr = &child1_obj;
    parent_ptr->print();

    parent_ptr = &child2_obj;
    parent_ptr->print();

    //child1_ptr = &parent_obj; // Doesn't work

    return 0;
}
