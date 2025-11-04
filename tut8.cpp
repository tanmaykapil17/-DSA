#include <iostream>
using namespace std;
int main()
{
         //simple calculator//
        int a;
        cout<<" Enter the value of a: "<<endl;
        cin>>a;
        int b;
        cout<<" Enter the value of b :"<<endl;
        cin>>b;

        char op;
        cout<<" Enter the operation  you want to perform : "<<endl;
        cin>>op;

        switch (op)
        {
        case '+':
            cout<<(a+b)<<endl;
            break;

        case '-': 
            cout<<(a-b)<<endl;
            break;
        case '*':
        cout<<(a*b)<<endl;
         break;

        case '/':
            cout<<(a/b)<<endl;
             break;

        case '%':
            cout<<(a%b)<<endl;  
             break;  
      
        default:
        cout<<" Enter the valid operation "<<endl;
            break;
        }
//
        // Homework 

        //Total amount = 1330
        // How many 100note , 50,20 ,10

        int amount=1330;



        switch (1)
        {
        case 1:
            cout<<amount/100<<endl;
            amount = amount%100;
        
            case 2:
            cout<<(amount %100)/20<<endl;

            
            case 3:
            cout<<((amount %100)%20)/10<<endl;
        
        default:
            break;
        }




   

    return 0;
}
