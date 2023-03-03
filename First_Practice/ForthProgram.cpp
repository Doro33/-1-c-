#include <iostream>
#include <string>
using namespace std;

int main()
{
    string previous = "";
    string current;
    cout << "please enter the text: ";
    while (cin >> current)
    {
        if(previous == current)
            cout << "Reapeted word is: " << current << endl;
        previous = current;
    }
}