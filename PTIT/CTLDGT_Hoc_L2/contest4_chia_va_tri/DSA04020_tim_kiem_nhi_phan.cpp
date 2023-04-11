#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int n, k;

void run_case()
{
    cin >> n >> k;
    int a[n];
    for (auto &x : a)
        cin >> x;

    bool ok = false;
    int l = 0, r = n - 1, m;
    int res = -1;
    while (l <= r)
    {
        m = (l + r) / 2;
        if (a[m] == k)
        {
            ok = true;
            res = m + 1;
            break;
        }
        else if (a[m] < k)
            l = m + 1;
        else
            r = m - 1;
    }

    if (ok)
        cout << res;
    else
        cout << "NO";
    cout << endl;
}

int main()
{

// #define LOCAL

#ifdef LOCAL
    freopen("../input.txt ", "r", stdin);
    freopen("../output.txt ", "w", stdout);
#endif

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int Test = 1;
    cin >> Test;
    for (int test = 1; test <= Test; test++)
    {
        run_case();
    }

    return 0;
}