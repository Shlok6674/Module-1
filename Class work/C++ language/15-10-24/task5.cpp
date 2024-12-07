#include<iostream>
using namespace std;

template <typename T>
T num(T x, T y, T z)
{
	if(x>y &&x>z)
	{
		cout<<"value 1 is Greatest"<<endl;
	}
	else if(y>x &&y>z)
	{
		cout<<"value 2 is Greatest"<<endl;
	}
	else
	{
		cout<<"value 3 is Greatest"<<endl;
	}
}

main()
{
	num<int>(3,6,11);
	num<char>('e','a','b');
	
}