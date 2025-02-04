#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

set<int> ke[1001];
bool visited[1001];
bool check = false;

bool dfs(int s, int par)
{
    visited[s] = true;

    for (auto x : ke[s])
    {
        if (!visited[x])
        {
            if (dfs(x, s))
                return true;
        }
        else if (visited[x] && x != par)
        {
            return true;
        }
    }
    return false;
}

void run_case()
{
    int v, e;
    cin >> v >> e;

    for (int i = 0; i < e; i++)
    {
        int x, y;
        cin >> x >> y;
        ke[x].insert(y);
        ke[y].insert(x);
    }

    memset(visited, false, sizeof(visited));
    for (int i = 1; i <= v; i++)
    {
        if (!visited[i])
        {
            if (dfs(i, 0))
            {
                cout << 1;
                return;
            }
        }
    }

    cout << 0;
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