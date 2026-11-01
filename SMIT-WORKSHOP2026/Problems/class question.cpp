#include<iostream>
using namespace std;
int main()
{
	int pin, num;
	cout<<"---+-Hi user Please enter your pin and maount to withdraw -+----"<<endl;
	cout<<"Enter your \n PIN :";
	cin>>pin;
	if(pin==1234)
	{
		cout<<" --+-ENTER \n AMOUNT TO WITHDRAW :";
		cin>>num;
		if(num<100000)
		{
			cout<<"--+--AMOUNT WITHDRAW IS :"<<num<<"--+--"<<endl;
			cout<<"--+--BANK BALANCE LEFT "<<100000-num<<"--+--";
		}
		else 
		{
			cout<<"--+--INCUFFICIENT AMOUNT --+--"<<endl;
		}
		
	}
	else 
	{
	cout<<"--+--Wrong PIN TRY AGAIN --+--";
	}
	return 0;
}
