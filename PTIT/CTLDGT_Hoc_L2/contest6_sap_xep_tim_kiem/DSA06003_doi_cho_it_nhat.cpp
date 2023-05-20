#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ii = pair<int, int>;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

void run_case()
{
    int n;
    cin >> n;
    int a[n];
    for (auto &x : a)
        cin >> x;

    int cnt = 0;
    for (int i = 0; i < n - 1; i++)
    {
        int min_j = i;
        bool ok = false;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[min_j])
            {
                ok = true;
                min_j = j;
            }
        }

        if (min_j != i)
        {
            swap(a[i], a[min_j]);
            cnt++;
        }
    }

    cout << cnt << endl;
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