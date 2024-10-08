#include<iostream>
using namespace std;

class A{
	public:
		myfun(int a)
		{
			cout<<"Hello"<<endl;
		}
		myfun(int a,int b)
		{
			cout<<"Welcome"<<endl;
		}
		myfun(string a)
		{
			cout<<"This is !!"<<endl;
		}
		myfun()
		{
			cout<<"Wow !!"<<endl;
		}
};


main()
{
	A obj;
	obj.myfun(10);
	obj.myfun(10,20);
	obj.myfun("Hello");
	obj.myfun();
}