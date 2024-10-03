#include<iostream>
using namespace std;

class A{
    
    public:
    Ab()
    {
        string s;
        int i;
        cout<<endl<<"Enter the Student Name\t";
        cin>>s;
        cout<<endl<<"Enter the Student Roll Number\t  ";
        cin>>i;
    }
};
class B:public A{
    public:
    int j,k,m;
    Bc()
    {
        
        cout<<endl<<"Marks of Maths\t";
        cin>>j;
        cout<<endl<<"Marks of English\t";
        cin>>k;
        cout<<endl<<"Marks of Science\t";
        cin>>m;

    }
};
class C:public B{
    public:
    Cd()
    {
        int total;
        float percent;
        total= j+k+m;
        percent= total/300*100;
        cout<<"Total Marks of student"<<total;
        cout<<endl<<"Percentage of student"<<percent;
    }
};

main()
{
    C obj;
    obj.Ab
    obj.Bc();
    obj.Cd();

}

