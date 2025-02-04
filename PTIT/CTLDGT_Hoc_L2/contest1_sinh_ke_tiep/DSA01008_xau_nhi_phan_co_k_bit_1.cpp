#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int n, k;
int a[16];

bool check(string s)
{
    if (s.size() != n)
        return false;

    int cnt = 0;
    for (auto x : s)
    {
        if (x == '1')
            cnt++;
    }
    return cnt == k;
}

void run_case()
{
    cin >> n >> k;
    queue<string> q;
    q.push("0");
    q.push("1");

    vector<string> res;
    while (q.size() > 0)
    {
        string s = q.front();
        q.pop();

        if (s.size() > n)
            break;

        if (check(s))
            res.push_back(s);

        q.push(s + "0");
        q.push(s + "1");
    }

    for (auto x : res)
        cout << x << endl;
}

int main()
{

// #define LOCAL

#ifdef LOCAL
    freopen("../input.txt ", "r", stdin);
    freopen("../output.txt ", "w", stdout);
    auto start = chrono::high_resolution_clock::now();
#endif

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int Test = 1;
    cin >> Test;
    for (int test = 1; test <= Test; test++)
    {
        run_case();
    }

#ifdef LOCAL
    auto end = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::milliseconds>(end - start);
    auto startT = chrono::system_clock::to_time_t(start);
    cout << "\n\n" << ctime(&startT) << (double)duration.count() / 1000 << " seconds\n";
#endif

    return 0;
}