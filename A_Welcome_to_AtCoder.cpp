#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int a, b, c;
    char s[101];
    cin >> a;
    cin >> b >> c;
    cin >> s;
    printf("%d %s", a + b + c, s);
    return 0;
}