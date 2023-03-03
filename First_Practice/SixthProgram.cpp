#include <iostream>
# include <vector>
using namespace std;

int main()
{
    vector <vector<int>> vec;

    vector<int> v1(6);
    vector<int> v2(3,1);
    vector<int> v3(4,4);

    vec.push_back(v1);
    vec.push_back(v2);
    vec.push_back(v3);

    for (int i = 0; i < vec.size(); i++)
    {
        for (int j = 0; j < vec[i].size(); j++)
        {
            cout << vec [i][j] <<" ";
        }
        cout << endl;
    }
}