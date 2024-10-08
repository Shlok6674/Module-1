#include<iostream>
using namespace std;

class A{
	public:
		myfun()
		{
			cout<<"Hello"<<endl;
		}
};
class B{
	public:
		myfun()
		{
			cout<<"Welcome"<<endl;
		}
};
class C:public A ,public B{
	public:
		myfun()
		{
		   A::myfun();
		   B::myfun();
		   
		   cout<<"This is child class"<<endl;
		}
};

main()
{
	C obj;
	obj.myfun();
}