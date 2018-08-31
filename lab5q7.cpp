#include<iostream>
using namespace std;
int main()

   {
   //declare variables
   char a;
   cout<<"enter a character";
   cin >>a;
       //condition
       if((a>= 'a' && a<= 'z') || (a>='A' && a<='Z'))
           {  
           cout<<"the character is an alphabet";
           }
       else
           {
           cout<<"the character is not an alphabet";
           }
   return 0;
   }
