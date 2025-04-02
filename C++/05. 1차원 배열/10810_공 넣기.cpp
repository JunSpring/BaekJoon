#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    vector<int> basket(N);

    for (int i = 0; i < M; i++)
    {
        int start, end, number;
        cin >> start >> end >> number;

        fill(basket.begin() + start - 1, basket.begin() + end, number);
    }

    for (const auto &i : basket)
        cout << i << ' ';

    return 0;
}
