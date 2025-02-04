#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ii = pair<int, int>;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e3 + 5;

ll n, m, f[MAX][MAX];
char a[MAX][MAX];

void run_case()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> a[i][j];

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if ((i == 1 && j == 1))
                f[i][j] = 1;
            else if (a[i][j] == '.')
            {
                f[i][j] = (f[i - 1][j] + f[i][j - 1]) % MOD;
                f[i][j] %= MOD;
            }
            else if (a[i][j] == '#')
                f[i][j] = 0;
            // cout << f[i][j] << " ";
        }
        // cout << endl;
    }

    cout << f[n][m];
}

int main()
{

#define LOCAL

#ifdef LOCAL
    freopen("../input.txt ", "r", stdin);
    freopen("../output.txt ", "w", stdout);
#endif

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int Test = 1;
    // cin >> Test;
    for (int test = 1; test <= Test; test++)
    {
        run_case();
    }

    return 0;
}