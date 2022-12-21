#include <bits/stdc++.h>
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;

typedef long long ll;
typedef long double ld;

#define endl "\n"
#define debug(args...) cout << (#args) << " = " << (args) << endl
#define MOD 1000000007
#define vi vector<int>
#define fl forward_list
#define pb push_back
#define pf push_front
#define read(st) getline(cin, st)
#define FOR(i, a, b) for (int i = a; i < b; i++)

int main()
{
    fastio;
    int n;
    int x;
    vi vet;
    while (cin >> n)
    {

        for (int i = 0; i < n; i++)
        {
            cin >> x;
            vet.pb(x);
        }
        vi vetaux;
        vetaux.pb(vet[0]);
        for (int i = 1; i < n; i++)
        {
            if (vet[0] >= vet[i])
                vetaux.pb(vet[i]);
        }
        if (vetaux.size() == vet.size())
            vetaux.clear();
        for (auto i : vetaux)
            cout << i << " ";
    }
    return 0;
}