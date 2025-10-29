#include <iostream>
using namespace std; 

int main() {
    //int a = 4;
    //int i = 3;
    //a = 2;            // yaha sirf value change kari, dobara declare nahi kara
    //int sum = a + (++i);
//
    //cout << "Sum = " << sum << endl;
    //cout << "i = " << i << endl;
     
    
    //for loop

    // question 1 - Print the n number of counting 

    /*int n;
    cout<<" Enter the value of n: "<<endl;
    cin>>n;

    cout<<" Printing the count from 1 to n : "<<endl;

    for ( i = 1; i <=n; i++)
    {
        cout<<i<<endl;
    }*/

    //question 2 - sum 1 to n 

    /*int n;
    cout<<" The value of n is :"<<endl;
    cin>>n;
    int sum= 0;
    int i=1;
    
    for ( i = 1; i <=n; i++)
    {
        cout<<i<<endl;

        sum =sum +i;
    }
    
    cout<<" The sum of the number series is :"<<sum<<endl;*/

    //question 3-  print fibonacci series 
          /*int n=10;

          int a=0;
          int b=1;
          cout<<a<<" "<<b<<" "<<endl;

          for (  int i = 1; i <=n; i++)
          {
                int nextNumber= a+b;

                cout<<nextNumber<<" ";
                 a=b;

                 b=nextNumber;
          }*/
          
            // question 4- print prime numbers 
          /*int n;
    cout << "Enter the value of n: "<<endl;;
    cin >> n;

    for (int i = 2; i <= n; i++) {
        bool isPrime = true;

        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            cout << i << " is a prime number" << endl;
        }
    }
        */
           // question 5 - continue keyword 

           /*for (int  i = 0; i <=5; i++)
           {
            cout<<"HI "<<endl;
            cout<<" HEY "<<endl;
            continue;
            cout<<" Reply toh karde "<<endl;
           }*/

           
           
          
    return 0;
}
