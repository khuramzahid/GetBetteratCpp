#include <iostream>
using namespace std;
class myStack {
    public:
        myStack();
        void push(int);
        int pop();
        void display();
    private:
        int *arr;
        int sizeOfArray;
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
    myStack::arr = nullptr;
    myStack::sizeOfArray = 0;
}
void myStack::push(int x) {
    int *temp = arr;
    arr = new int[++sizeOfArray];
    if(temp != nullptr) {
        for(int j=0; j<sizeOfArray-1; j++) {
            arr[j] = temp[j];
        }
        delete[] temp;
    }
    arr[sizeOfArray-1] = x;
}
int myStack::pop() {
    int requiredValue = arr[sizeOfArray-1];
    if(sizeOfArray != 0) {
        int *temp = arr;
        arr = new int[--sizeOfArray];
        for(int j=0; j<sizeOfArray; j++) {
            arr[j] = temp[j];
        }
        delete[] temp;
    }
    return requiredValue;
}
void myStack::display() {
    for(int j=0;j<sizeOfArray;j++) {
        cout<<arr[j]<<" ";
    }
    if(sizeOfArray == 0) {
        cout<<"Empty Stack";
    }
    cout<<endl<<endl;
}
