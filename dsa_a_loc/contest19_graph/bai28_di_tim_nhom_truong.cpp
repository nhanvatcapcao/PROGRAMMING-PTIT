#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

vector<int> ke[1001];
bool visited[1001];

void dfs(int u)
{
    visited[u] = true;

    for (auto v : ke[u])
    {
        if (!visited[v])
            dfs(v);
    }
}

void run_case()
{
    int v, e;
    cin >> v >> e;
    for (int i = 0; i < e; i++)
    {
        int x, y;
        cin >> x >> y;
        ke[x].push_back(y);
        ke[y].push_back(x);
    }

    memset(visited, false, sizeof(visited));


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