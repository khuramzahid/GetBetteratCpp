#include <iostream>
#include <string>
using namespace std;
/*
int main() {
    while (true) {
        static int x = 0;
        if(x == 5)
            break;
        cout<<"X: "<<x<<endl;
        x++;
    }
    return 0;
}
*/
/*
void print(string s) {
    static int index = 0;
    if(index == s.length()) {
        cout<<endl;
        return;
    }
    cout<<s[index];
    index++;
    print(s);
}
int main() {
    print("Sample String.");
    return 0;
}
*/

class A {
    public:
        A() { }
        static void print() { cout<<"Static Function."<<endl; }
        void print2() { cout<<"Non Static Function."<<endl; }
};
int main() {
    A::print();
    A a1;
    a1.print();
    a1.print2();
    return 0;
}
