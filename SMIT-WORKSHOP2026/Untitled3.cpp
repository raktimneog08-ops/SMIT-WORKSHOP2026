#include<iostream>
#include<math.h>
using namespace std;

int main()
 {
 	char r='A',next;
    int a=3,b=5,sum=0;
    float k;
    cout<<"RANDOM K = "<<k<<endl;
    cout<<"A ="<<a<<endl;
    cout<<"B ="<<b<<endl;
    next = r+1;
    sum=a*b;
    k=b/a;
    cout<<"SUM OF A AND B = "<<a+b<<endl;
    cout<<"MULTIPLICTION OF A AND B = "<<a*b<<endl;
    cout<<"DIVISION OF A AND B ="<<k<<endl;
    cout<<"SUBSTRACTION OF A AND B = "<<a-b<<endl;
    cout<<(sum<10)<<endl;
    cout<<"ALPHABET AFFTER A IS "<<next<<endl;
    cout<<"PLACEMENT QUESTION "<<a--<<"\t"<<a++<<"\t"<<--a<<endl;
    if(sum%5==0)
    { 
    cout<<"the sum is divisible by 5";
	}
	else 
	{
		cout<<"the sum is not divisible by 5";
	}
	
	
	if(k<=1)
	{
		cout<<" \nK < 1"<<endl;
	}
	else if(k=0)
	{
		cout<<" K = 1"<<endl;
	}
	else if(k>0)
	{
	  cout<<" K > 1"<<endl;	
	}
	else 
	{
		cout<<"\nError";
	}
	
	return 0;
}
