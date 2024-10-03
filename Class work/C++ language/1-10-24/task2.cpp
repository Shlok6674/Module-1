#include<iostream>
using namespace std;

class A{
    public:
    A(int n)
    {
        int n1=0,n2=1,n3,i;
        cout<<n1 <<n1<<endl;
        cout<<n2 <<n2;
        for(i=2;i<=n;i++)
        {
            n3=n1+n2;
            n1=n2;
            n2=n3; 
            cout<<n3<<endl;

        }
       


    }

};

main()
{
    int k;
    cout<<"ENTER THE NUMBER"<<endl;
    cin>>k;
   
    A obj(k);
}