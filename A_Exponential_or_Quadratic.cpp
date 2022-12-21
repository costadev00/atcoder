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

void print_2_pow_n(int n)
{
    int i, j, blen = n / 32 + 1, dlen = n / 29 + 1;
    uint32_t bin[blen], dec[dlen];
    uint64_t num;

    for (i = 0; i < blen; i++)
        bin[i] = 0;
    bin[n / 32] = (uint32_t)1 << (n % 32);

    for (j = 0; blen > 0;)
    {
        for (num = 0, i = blen; i-- > 0;)
        {
            num = (num << 32) | bin[i];
            bin[i] = num / 1000000000;
            num = num % 1000000000;
        }
        dec[j++] = (uint32_t)num;
        while (blen > 0 && bin[blen - 1] == 0)
            blen--;
    }
    printf("2^%d = %u", n, dec[--j]);
    while (j-- > 0)
        printf("%09u", dec[j]);
    printf("\n");
}

int main()
{
    fastio;
    int n;
    cin >> n;
    // print_2_pow_n(n);
    cout<<n;
    // if (pow(n, 2) > n * n)
    //     cout << "Yes\n";
    // else
    //     cout << "No\n";
    return 0;
}