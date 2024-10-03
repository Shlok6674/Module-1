#include<iostream>
using namespace std;

class A{
    public:
    A(int a, int b)
    {
        cout<<"A :"<<a<<endl;
        cout<<"B :"<<b;
    }

};

main()
{
    A obj(10,20);
}
