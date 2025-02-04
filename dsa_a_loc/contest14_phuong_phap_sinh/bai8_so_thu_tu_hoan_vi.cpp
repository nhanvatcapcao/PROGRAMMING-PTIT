#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int n;
int a[11];
int b[11];

bool final = false;

void init()
{
    for (int i = 1; i <= n; i++)
        a[i] = i;
}

bool check()
{
    for (int i = 1; i <= n; i++)
    {
        if (a[i] != b[i])
            return false;
    }

    return true;
}

void generate()
{
    int i = n - 1;
    while (i >= 1 && a[i] > a[i + 1])
        i--;

    if (i == 0)
    {
        final = true;
    }
    else
    {
        int j = n;
        while (a[i] > a[j])
            j--;

        swap(a[i], a[j]);
        reverse(a + i + 1, a + n + 1);
    }
}

// 1 2 3 6 9 8 7 5 4
// 1 2 3 7 4 5 6 8 9

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt ", "r", stdin);
    freopen("../output.txt ", "w", stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> b[i];

    init();
    int cnt = 1;
    while (!final)
    {
        if (check())
        {
            cout << cnt;
            return 0;
        }
        cnt++;

        generate();
    }

    return 0;
}