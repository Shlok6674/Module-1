#include<iostream>
using namespace std;
class Hell
{
    public:
    int a,b;

    add()// method
    {
        cout<<"\nA: ";
        cin>>a;
        cout<<"\nB: ";
        cin>>b;

        cout<<"\nADDITION\t"<<a+b;
    }
};
class Hell2
{
    public:
    int a,b;
     sub()
    {
        cout<<"\nA: ";
        cin>>a;
        cout<<"\nB: ";
        cin>>b;

        cout<<"\nSUBRACTION\t"<<a-b;
    }
};
class Hell3
{
    public:
    int a,b;
    mul()
    {
        cout<<"\nA: ";
        cin>>a;
        cout<<"\nB: ";
        cin>>b;

        cout<<"\nMULTIPLICATION\t"<<a*b;
    }
};

main()
{
    Hell obj;
    obj.add();
    Hell2 obj2;
    obj2.sub();
    Hell3 obj3;
    obj3.mul();

}
