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
class C:public A{
    public:
    Cd()
    {
        cout<<"This is Function 3"<<endl;
    }
};

main()
{
    B obj1;
    obj1.Ab();
    obj1.Bc();
    C obj;
    obj.Ab();
    obj.Cd();

}

