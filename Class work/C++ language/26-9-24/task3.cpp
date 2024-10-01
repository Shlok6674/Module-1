#include<iostream>
using namespace std;
class A
{
    public:
    A()
    {
        cout<<"Welcome to our website!!"<<endl;
    }
    fac()
    {
        int n,i,fac=1;
        cout<<"Enter Number: ";
        cin>>n;

        for(i=1;i<=n;i++)
        {
            fac*=i;
        }
        cout<<fac<<endl;
    }
    ~A()
    {
        cout<<"Thank You!!"<<endl;
    }
};
main()
{
    A obj;
    obj.fac();

}