#include<iostream>
using namespace std;
int main()
{
//declare variables
float n1,n2,n3;
//enter three numbers
cout << "enter three numbers";
cin >> n1 >> n2 >> n3;
 //comparision
 if(n1>n2 && n1>n3)
  {
 cout<<"largest number is"<<n1;
  }
  else if(n2>n3 && n2>n1)
  { 
  cout <<"largest number is"<<n2;
  } 
 else 
  {
 cout<<"largest number is"<<n3;
  }
 
return 0;
}
