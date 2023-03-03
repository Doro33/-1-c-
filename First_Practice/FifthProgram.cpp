#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    double temp;
    vector <double> temps;

    cout << "please enter the tempraturs: ";
    while (cin >> temp)
    {
        temps.push_back(temp);
    }

    double sum;
    for (int i = 0; i < temps.size() ; i++)
    {
        sum += temps[i];
    }

    cout << "Mean temperature: " << sum/temps.size() <<endl;

    sort(temps.begin(), temps.end());
    cout << "Median temprature: " << temps[temps.size()/2];
     
}