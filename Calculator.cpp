#include <iostream>
using namespace std;
int main()
{
    int a,b;
    char op;
    cout<<("This is a calculator")<<endl;
    
    cout<<("Enter a number : ");
    cin>>a;
    
    cout<<("Enter operator : ");
    cin>>op;
    
     cout<<("Enter second number : ");
     cin>>b;
     
    switch (op){
        case '+':
         cout<<a+b;
         break;
         
          case '-':
         cout<<a-b;
         break;
         
          case '*':
         cout<<a*b;
         break;
         
          case '/':
            if (b==0)
             cout<<"Can not divide by zero";
             else
              cout<<a/b;
         break;
         
          default:
         cout<<"Invalid statement";
         break;
    }
    
    
    return 0;
}
