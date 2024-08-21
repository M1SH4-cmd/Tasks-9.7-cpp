#include <iostream>
using namespace std;
using lldouble = long double;
int main()
{
    cout << "This programm will chech if your number is float. Type 0 to exit" << endl;
    for(;true;){
        lldouble num;
        cout << "Enter a number: ";
        cin >> num;

        if(num == 0){
            cout << "Exiting..." << endl;
            break;
        }

        if(cin.fail()){
            cout << "Your number is not floating point" << endl;
            continue;
        }else{
            cout << "Your number is a floating point" << endl;
            continue;
        }
    }
}