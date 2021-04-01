#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int a, b;
    cin >> a >> b;
    a = a + b;
    if (a >= 15 && b >= 8)
    {
        cout << "1\n";
    }
    else if (a >= 10 && b >= 3)
    {
        cout << "2\n";
    }
    else if (a >= 3)
    {
        cout << "3\n";
    }
    else
    {
        cout << "4\n";
    }

    return 0;
}