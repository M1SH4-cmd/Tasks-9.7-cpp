#include <iostream>
using namespace std;
int main()
{
    cout << "This programm will chech if your number is float" << endl;
    for(;true;){
        cout << "Enter a nubmer:" << endl;
        string num;
        getline(cin, num);
        if(num == "EXIT"){
            break;
        }
        if(num[0] != '-' || num[0] < '0' || num[0] > '9' || num[0] != '.'){
            cout << "incorrect value, please enter a number" << endl;
            continue;
        }

        for(int i = 0; i < num.length(); i++){
            if(int points = 0; (num[i] == '.')){
                points++;
                if((points > 1)  && (num[i] < '0' || num[i] > '9')){
                    cout << "incorrect value, please enter a float number" << endl;
                    continue;
                }
            }
        }
    }
}