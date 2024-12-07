#include<iostream>
using namespace std;

class A{
	private:
		int a,b;
		
		friend fetch(A &obj); // DECLARE
};
		fetch(A &obj)
		{
			cout<<"Enter A : ";
			cin>>obj.a;
			cout<<"Enter B : ";
			cin>>obj.b;
			
			cout<<"Addition : "<<obj.a+obj.b;
		}

main()
{
	A obj;
	fetch(obj);
	
}