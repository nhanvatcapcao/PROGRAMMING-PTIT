#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int n;
int b[16][16];
int x[100]; // o buoc thu i chon thanh pho thu j
int c[100];
int Min = MAX;

void init()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> b[i][j];
            Min = min(Min, b[i][j]);
        }
    }
    x[1] = 1;
    c[1] = 1;
}

ll sum = 0;
ll res = INF;
void Try(int i)
{
    for (int j = 1; j <= n; j++)
    {
        if (c[j] == 0)
        {
            x[i] = j;
            c[j] = 1;
            sum += b[x[i - 1]][x[i]];

            if (i == n)
            {
                res = min(res, sum + b[x[i]][1]);
            }
            else if (sum + (n - i + 1) * Min < res)
            {
                Try(i + 1);
            }
            c[j] = 0;
            sum -= b[x[i - 1]][x[i]];
        }
    }
}

void run_case()
{
    init();
    Try(2);
    cout << res;
}

int main()
{

#define LOCAL

#ifdef LOCAL
    freopen("../input.txt ", "r", stdin);
    freopen("../output.txt ", "w", stdout);
    auto start = chrono::high_resolution_clock::now();
#endif

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int Test = 1;
    // cin >> Test;
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