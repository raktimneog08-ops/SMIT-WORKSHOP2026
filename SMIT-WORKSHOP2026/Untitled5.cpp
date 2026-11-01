#include <iostream>
using namespace std;
int main() {
	int y;
   cout<<"ENTER YEAR TO CHECK :"<<endl;
   cin>>y;
   if(y%4==0 & y%100!=0)
   {
   	cout<<"LEAP YEAR ";
   }
   else 
   {
   	cout<<"NOT LEAPYEAR";
   	
   }

    return 0;
}

