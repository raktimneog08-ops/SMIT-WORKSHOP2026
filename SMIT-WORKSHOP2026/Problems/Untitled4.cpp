#include<iostream>

using namespace std;
int main()
{
	
string k[3][3] = {
    {"*", "*", "*"},
    {"*", "*", "*"},
    {"*", "*", "*"},
};

	for(int i=0;i<3;i++)
	{
	for(int j=0;j<3;j++)
	{
		cout<<k[i][j]<<"\t";
	 } 
	 cout<<"\n";
	}
	return 0;
}
