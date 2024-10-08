#include<iostream>
using namespace std;

class A{
    
    public:
    Ab()
    {
        cout<<"This is Function 1"<<endl;
    }
};
class B:public A{
    public:
    Bc()
    {
        cout<<"This is Function 2"<<endl;
    }
};
class C{
    public:
    Cd()
    {
        cout<<"This is Function 3"<<endl;
    }
};
class D:public B,public C{
    public:
    De()
    {
        cout<<"This is Function 4"<<endl;
    }
};

main()
{
    D obj1;
    obj1.Ab();
    obj1.Bc();
    obj1.Cd();
    obj1.De();
}

