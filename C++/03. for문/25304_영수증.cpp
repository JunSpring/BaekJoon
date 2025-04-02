#include <iostream>
using namespace std;

int main()
{
    int total;
    int number;

    cin >> total;
    cin >> number;

    for (int i = 0; i < number; i++)
    {
        int price, amount;
        cin >> price >> amount;

        total -= price * amount;
    }

    if (total == 0)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}