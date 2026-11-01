#include<iostream>
#include<ctype.h>
using namespace std;
void calculator(int n)
{
	int p,v;
	switch(n)
	{
		case 1:
			cout<<"\n Enter TWO value's : ";
			cin>>p>>v;
			cout<<"ADDITION OF "<<p<<" AND "<<v<<": "<<p+v;
			break;
		case 2:
		    cout<<"\n Enter TWO value's : ";
			cin>>p>>v;
			cout<<"SUBSTRACTION OF "<<p<<" AND "<<v<<":"<<p-v;
			break;
		case 3:
		     cout<<"\n ENTER SINGLE VALUE : ";
		     cin>>p;
			 cout<<"\n SQUARE OF "<<p<<":"<<p*p<<endl;
			 break;	
		default :
		    cout<<"\n INVALID OPTION ";
			break;			
	}
}
int main()
{
	int n;
	char k='Y';

	while(toupper(k)!='N')
	{
	cout<<"\n+---WELCOME---+"<<endl;
	cout<<"|-1.ADDITION--|"<<endl;
	cout<<"|-2.SUBSTRACT-|"<<endl;
	cout<<"|-3.SUQUARE---|"<<endl;
	cout<<"+-------------+"<<endl;
	cout<<"\n ENTER YOUR OPTION :";
	cin>>n;
	calculator(n);
	cout<<"\n\n";
	cout<<"\n DO YOU WANT TO CONTINUE Y/N :";
	cin>>k;
	}
	system("cls");
	cout<<"----+----BYEEEEEEE-----+----";

	return 0;
}
