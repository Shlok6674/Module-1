#include<iostream>
using namespace std;

class Array{
    public:
    desc()
    {
        int a[5],i,n,j;
        for(i=0;i<5;i++)
        {
         cout<<"Enter the number"<<endl;
         cin>>a[i];
        }
        for(i=0;i<5;i++)
        {
          for(j=i+1;j<5;j++)
          {
            if(a[i]<a[j])
            {
                n=a[i];
                a[i]=a[j];
                a[j]=n;
            }
          }
        }
        for(i=0;i<5;i++)
        {
         cout<<endl<<" "<<a[i];   
        } 
    }
};

class Concat:public Array{
    public:
    cat()
    {
      string  c,d,concat;
      cout<<endl<<"Enter string: ";
      cin>>c;
      cout<<"Enter string: ";
      cin>>d;

      concat= c+d;

      cout<<"Merge string ids :  "<<concat;
        
    }
};

class Reverse :public Concat
{
    public:
    rev()
    // e = Num
    // h = original number
    // f = reverse number
    // g = remainder
    {
       int e, f = 0, g, h;
          
          cout<<endl<<"Enter a number: ";
          cin>>e;

          h = e;

    
          while(e != 0) 
          {
             g = e % 10;
             f = f * 10 + g;
             e = e / 10;
          }

          cout<<"The reverse of "<<h<<" is "<<f<<endl;
          
    }   
};

class Prime:public Reverse
{
    public:
    num()
    {
        int n,i,c=0;
        cout<<endl<<"Enter a number: ";
        cin>>n;

        for(i=1;i<=n;i++)
        {
           if(n%i==0)
           {
            c++;
           }
        }
        if(c==2)
        {
          cout<<n<<" is a prime number"<<endl;
        }
        else
        {
          cout<<n<<" is not a prime number"<<endl;
        }
    }
    
};

int main()
{
    while(1)
    {
        int ch();
        cout<<"press 1 for desc of array"<<endl;
        cout<<"press 2 for concat of string"<<endl;
        cout<<"press 3 for reverse number"<<endl;
        cout<<"press 4 for prime number"<<endl;
        cout<<"press 5 for Exit::"<<endl;
        cout<<"Enter your choice::"<<endl;
        cin>>ch;
        if(ch==1)
        {
            Array obj;
            obj.desc();
        }
        else if(ch==2)
        {
            Concat obj2;
            obj2.concat();
        }
        else if(ch==3)
        {
            Reverse obj3;
            obj3.reverse();
        }
        else if(ch==4)
        {
            Prime obj4;
            obj4.num;
        }
        else if(ch==5)
        {
            cout<<"thanks";
            break;
        }
        else
        {
            cout<<"invalid choice::"<<endl;
        }
    }
    
   
}