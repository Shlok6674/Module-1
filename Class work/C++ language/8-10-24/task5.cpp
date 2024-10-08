#include<iostream>
using namespace std;

class Myclass{

    public:
    string name;
    int ac_no,bal=5000,de,we;
    regi()
    {
        cout<<"Enter your name"<<endl;
        cin>>name;
        cout<<"Enter your account number"<<endl;
        cin>>ac_no;

        cout<<"Your Balance is : "<<bal<<endl;

    }
    deposit()
    {
        cout<<"Enter the amount you want to deposit"<<endl;
        cin>>de;
        cout<<"Your Deposit amount is : "<<de<<endl;
        bal=bal+de;
    }
    withdraw()
    {
        cout<<"Enter the amount you want to withdraw"<<endl;
        cin>>we;
        cout<<"Your Withdraw amount is : "<<we<<endl;
        if(we>bal)
        {
            cout<<"Insufficient Balance"<<we-bal<<endl;
            

        }
        else
        {
            bal=bal-we;
        }   
    }
    check()
    {
        cout<<"Amount Present in your Account is "<<bal<<endl;   
    }
};

main()
{
    Myclass obj;

    cout<<"press 1 for register"<<endl;
    cout<<"press 2 for exit"<<endl;

    int ch;
    cout<<"Enter choice"<<endl;
    cin>>ch;

    if(ch==1)
    {
        obj.regi();
        while(1)
        {
            cout<<"press 1 for Deposit"<<endl;
            cout<<"press 2 for Withdraw"<<endl;
            cout<<"press 3 for Check"<<endl;
            cout<<"press 4 for Exit"<<endl;

            int ch1;
            cout<<"Enter choice"<<endl;
            cin>>ch1;

            if(ch1==1)
            {
                obj.deposit();
            }
            else if(ch1==2)
            {
                obj.withdraw();
            }
            else if(ch1==3)
            {
                obj.check();
            }
            else if(ch1==4)
            {
                cout<<"Invalid Choice!!";
                break;
            }
        }
    }
    else
    {
        cout<<"Thank You!!";
    }
}