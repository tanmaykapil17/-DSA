#include <iostream>
using namespace std;

bool isEven(int a)
{

    if (a % 2 == 0)
    {
        cout << "even number ";

        return true;
    }
    else
    {
        cout << " Odd number " << endl;

        return false;
    }
}
int main()
{

    int a;
    cout << " Enter the value of N is:" << endl;
    cin >> a;

    isEven(a); // function call karna ise bolte hai;
}
