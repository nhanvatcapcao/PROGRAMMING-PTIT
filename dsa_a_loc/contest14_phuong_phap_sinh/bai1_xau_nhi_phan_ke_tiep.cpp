#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt ", "r", stdin);
    freopen("../output.txt ", "w", stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    int i = s.size() - 1;
    while (i >= 0 && s[i] == '1')
    {
        s[i] = '0';
        i--;
    }

    if (i >= 0)
    {
        s[i] = '1';
    }

    cout << s;

    return 0;
}