#include <iostream>
using namespace std;

int main()
{
    int number;
    cin >> number;

    for (int i = 0; i < number / 4; i++)
        cout << "long ";
    cout << "int";

    return 0;
}