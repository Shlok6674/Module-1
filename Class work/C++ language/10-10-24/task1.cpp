#include<iostream>
using namespace std;

class Employer{
    //abstract class
    public:
    virtual salary()=0;

};

class Shlok:public Employer{
    public:
    salary()
    {
        cout<<"Salary of shlok is 25k"<<endl;
    }
};

class Himanshu:public Employer{
    public:
    salary()
    {
        cout<<"Salary of himanshu is 25k"<<endl;
    }
};

class Dax:public Employer{
    public:
    salary()
    {
        cout<<"Salary of dax is 25k"<<endl;
    }
};

main()
{
    Shlok obj1;
    obj1.salary();

    Himanshu obj2;
    obj2.salary();

    Dax obj;
    obj.salary();

}