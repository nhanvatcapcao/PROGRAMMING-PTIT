#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

void run_case()
{
    int n, m;
    cin >> n >> m;
    multiset<int> ke[n + 1];

    for (int i = 1; i <= m; i++)
    {
        int x, y;
        cin >> x >> y;
        ke[x].insert(y);
        ke[y].insert(x);
    }

    for (int i = 1; i <= n; i++)
    {
        cout << i << " : ";
        for (auto x : ke[i])
            cout << x << " ";
        cout << endl;
    }
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