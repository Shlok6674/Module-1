#include<iostream>//Encaplulation
using namespace std;

class Vehicle{
    //abstract class
    public:
    virtual wheel()=0;
    virtual colour()=0;


};

class Bike:public Vehicle{
    public:
    wheel()
    {
        cout<<"Bike has 2 Wheels"<<endl;
    }
    colour()
    {
        cout<<"Bike is havinng blue colour"<<endl;
    }
};

class Car:public Vehicle{
    public:
    wheel()
    {
        cout<<"Car has 4 wheel"<<endl;
    }
    colour()
    {
        cout<<"Car is having white colour"<<endl;
    }
};

class Auto :public Vehicle{
    public:
    wheel()
    {
        cout<<"Auto has 3 wheel"<<endl;
    }
    colour()
    {
        cout<<"Auto is having black and yellow colour"<<endl;
    }
};

main()
{
    Bike obj1;
    obj1.wheel();
    obj1.colour();

    Car obj2;
    obj2.wheel();
    obj2.colour();

    Auto obj;
    obj.wheel();
    obj.colour();

}