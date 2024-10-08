#include<iostream>
using namespace std;

class A{
	public:
		myfun()
		{
			cout<<"Hello"<<endl;
		}
};
class B:public A{
	public:
		myfun()
		{
			cout<<"Welcome"<<endl;
		}
};
class C{
	public:
		myfun()
		{		   
		   cout<<"This is child class"<<endl;
		}
};
class D:public B ,public C{
	public:
		myfun()
		{
			A::myfun();
			B::myfun();
			C::myfun();
			
			cout<<"Tops"<<endl;
		}
};
main()
{
	D obj;
	obj.myfun();
}