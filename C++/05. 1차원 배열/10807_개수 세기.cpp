#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> numbers(n);
    for (int i = 0; i < n; i++)
        cin >> numbers[i];

    int c;
    cin >> c;

    int result = count(numbers.begin(), numbers.end(), c);
    cout << result << endl;

    return 0;
}
