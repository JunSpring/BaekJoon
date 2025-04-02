#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    vector<int> basket(N);
    for (int i = 0; i < N; i++)
        basket[i] = i + 1;

    for (int i = 0; i < M; i++)
    {
        int basket1, basket2;
        cin >> basket1 >> basket2;

        swap(basket[basket1 - 1], basket[basket2 - 1]);
    }

    for (const auto &i : basket)
        cout << i << ' ';

    return 0;
}