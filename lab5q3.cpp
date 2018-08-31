#include<iostream>
using namespace std;
int main()
  {
  //declare variables
  int n1;
  //enter the number
  cout << "enter the number";
  cin >> n1;
    //conditions
    if(n1>0)
        {
        cout << "the number is positive "<< n1;
        }
    else if(n1<0)
        {
        cout << "the number is negative "<< n1; 
        }
    else
        {
        cout<<"the number is zero "<< n1;
        }


  return 0;
  }
