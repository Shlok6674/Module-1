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
    sub()
    {
        cout<<"\nA: ";
        cin>>a;
        cout<<"\nB: ";
        cin>>b;

        cout<<"\nSUBRACTION\t"<<a-b;
    }
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
    obj.sub();
    obj.mul();

}
