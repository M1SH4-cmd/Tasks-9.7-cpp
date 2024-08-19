#include <iostream>
using namespace std;

int main()
{

    cout << "This programm will calculate the duration of a train ride from departure to arrival time. Type EXIT to exit\n";
    string departure;
    string arrival;

    for(;true;){ // the "while" cycle is not my favourite, sorry ;)

    cout << "Enter departure time:" << endl;
    cin >> departure;

    if(departure == "EXIT") break;

    cout << "Enter arrival time:" << endl;
    cin >> arrival;

    if(arrival == "EXIT") break;

    string sdepHrs = departure.substr(0, 2);
    string sdepMin = departure.substr(3, 2);

    string sarrHrs = arrival.substr(0, 2);
    string sarrMin = arrival.substr(3, 2);

    int idepHrs = stoi(sdepHrs);
    int idepMin = stoi(sdepMin);

    int iarrHrs = stoi(sarrHrs);
    int iarrMin = stoi(sarrMin);
    if(idepHrs < 0 || idepHrs > 23){
        cout << "Invalid departure time. Please enter a valid time in 24-hour format (HH:MM)." << endl;
        continue;
    }

    cout << "The train ride was during: " << abs(iarrHrs - idepHrs) << " hrs. " << abs(iarrMin - idepMin) << " min." << endl;
}
}