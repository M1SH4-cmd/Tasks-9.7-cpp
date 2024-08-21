#include <iostream>
using namespace std;
using lldouble = long double;
int main()
{
    cout << "This programm will chech if your number is float. Type 0 to exit" << endl;
    lldouble num;
    cout << "Enter a number: ";
    cin >> num;

    if(cin.fail()){
        cout << "Your number is not floating point" << endl;
          
    }else{
        cout << "Your number is a floating point" << endl;
        }
}