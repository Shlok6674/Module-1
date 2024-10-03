#include<iostream>
using namespace std;

class A{
    
    public:
    Ab()
    {
        cout<<"This is Function 1"<<endl;
    }
};
class B{
    public:
    Bc()
    {
        cout<<"This is Function 2"<<endl;
    }
};
class C:public A,public B{
    public:
    Cd()
    {
        cout<<"This is Function 3"<<endl;
    }
};

main()
{
    C obj;
    obj.Ab();
    obj.Bc();
    obj.Cd();

}

