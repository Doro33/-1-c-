#include <iostream>
#include <string>
using namespace std;
int main()
{
    string name;
    int age;
    
    cout << "please enter your name followed by your age: ";
    cin >> name >> age;
    cout << "Hello " << name << endl 
         << "you are " << age << endl;
}