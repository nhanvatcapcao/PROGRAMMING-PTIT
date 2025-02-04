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
    int n;
    cin >> n;
    int a[n];

    vector<int> odd;
    vector<int> even;

    for (auto &x : a)
    {
        cin >> x;
        if (x % 2 == 0)
            even.push_back(x);
        else
            odd.push_back(x);
    }

    int O = odd.size(), E = even.size();

    // kiem tra tinh chan le
    if (O % 2 == 0 && E % 2 == 0)
    {
        cout << "YES";
        return;
    }

    // kiem tra cac so cach nhau 1 don vi
    sort(even.begin(), even.end());
    sort(odd.begin(), odd.end());

    int i = 0, j = 0;
    while (i < E && j < O)
    {
        if (abs(even[i] - odd[j]) == 1)
        {
            cout << "YES";
            return;
        }

        if (even[i] < odd[j])
            i++;
        else
            j++;
    }

    cout << "NO";
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