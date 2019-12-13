#include <iostream>
#include <string>
using namespace std;
class B {
    public:
        B(){}
        void print() { cout<<"Will not execute."; } // Lesser Precedence, will be overriden
};
class C : public B{
    public:
        C() {}
        void print(){ cout<<"No Parameters."<<endl; }
        void print(int x) { cout<<"X: "<<x<<endl; }
};
int main()
{
    C c_obj;
    c_obj.print(1);
    return 0;
}
