#include <iostream>
#include <string>
using namespace std;
class A{
    public:
        A() {
            a = "A Public"; b = "A Protected"; c = "A Private";
            cout<<"A constructor executed."<<endl;
        }
        string a;
    protected:
        string b;
    private:
        string c;
};
class B : private A{
    public:
        B() {
            d = "B Public"; e = "B Protected"; f = "B Private";
            cout<<"B constructor executed."<<endl;
        }
        string d;
    protected:
        string e;
    private:
        string f;
};
class C : public B{
    public:
        C() {
            g = "C Public"; h = "C Protected"; i = "C Private";
            cout<<"C constructor executed."<<endl;
        }
        string g;
    protected:
        string h;
    private:
        string i;
};
class D : public C {
    public:
        D() {
            j = "D Public"; k = "D Protected"; l = "D Private";
            cout<<"D constructor executed."<<endl;
        }
        void print(){
            cout<<endl;
            //cout<<a<<endl;
            //cout<<b<<endl;
            //cout<<c<<endl;
            cout<<d<<endl;
            cout<<e<<endl;
            //cout<<f<<endl;
            cout<<g<<endl;
            cout<<h<<endl;
            //cout<<i<<endl;
            cout<<j<<endl;
            cout<<k<<endl;
            cout<<l<<endl;
        }
        string j;
    protected:
        string k;
    private:
        string l;
};
int main()
{
    D d_obj;
    //d_obj.print();

    //cout<<d_obj.a<<endl;
    //cout<<d_obj.b<<endl;
    //cout<<d_obj.c<<endl;
    cout<<d_obj.d<<endl;
    //cout<<d_obj.e<<endl;
    //cout<<d_obj.f<<endl;
    cout<<d_obj.g<<endl;
    //cout<<d_obj.h<<endl;
    //cout<<d_obj.i<<endl;
    cout<<d_obj.j<<endl;
    //cout<<d_obj.k<<endl;
    //cout<<d_obj.l<<endl;
    return 0;
}
