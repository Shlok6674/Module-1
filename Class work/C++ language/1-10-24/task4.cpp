#include<iostream>
using namespace std;

class A{
    
    public:
    Ab()
    {
        cout<<"This is Parent Class"<<endl;
    }
};
class B:public A{
    public:
    Bc()
    {
        cout<<"This is Child Class"<<endl;
    }
};
class C:public B{
    public:
    Cd()
    {
        cout<<"This is Child Class"<<endl;
    }
};

main()
{
    C obj;
    obj.Ab();
    obj.Bc();
    obj.Cd();

}

