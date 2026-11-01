#include<iostream>
using namespace std;
int main()
{
	int num=10;
	int *prt=&num;
	
	cout<<"CURRENT POINTER VALUE IS "<<*prt;
	*prt+=40;
	cout<<"\nCHANGED POINTER VALUE "<<num;
	return 0;
}
