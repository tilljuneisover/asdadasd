#include <iostream> 
using namespace std;
int main() 
{ double a;
 double b; 
 char op; 
 double res;
 cout <<"Enter number 1: ";
  cin>>a; 
  cout<<"Enter number 2: ";
   cin>>b; 
   cout<<"Enter operetaion: "; 
   cin>>op; 
   if(op=='+')
    res=a+b; 
    else if(op=='-') 
    res=a-b;
     else if(op=='*')
      res=a*b;
       else if(op=='/')
        res=a/b; 
    cout <<"result "<<res<<endl;}
    