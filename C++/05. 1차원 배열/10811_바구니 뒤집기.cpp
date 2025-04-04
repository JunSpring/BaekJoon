#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    vector<int> v(N);
    for (int i = 0; i < N; i++)
        v[i] = i + 1;

    for (int i = 0; i < M; i++)
    {
        int start, end;
        cin >> start >> end;

        reverse(v.begin() + start - 1, v.begin() + end);
    }

    for (const auto &i : v)
        cout << i << ' ';

    return 0;
}