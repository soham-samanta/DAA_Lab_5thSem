// SOHAM SAMANTA CODES
#include <bits/stdc++.h>
using namespace std;
// #define ll long long int
typedef long long ll;
#define mod 1000000007
#define PI 3.1415926535897932384626433832
#define ss                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);


bool cmp1(pair<ll, ll> a, pair<ll, ll> b)
{
    if (a.first == b.first)
        return a.second > b.second;
    return a.first > b.first;
}

bool cmp2(pair<ll, ll> a, pair<ll, ll> b)
{
    if (a.second == b.second)
        return a.first > b.first;
    return a.second > b.second;
}

int32_t main()
{
    ss;
    ll t;
    cin >> t;
    while (t--)
    {
        ll w, n, m;
        cin >> w >> n >> m;
        vector<pair<ll, ll>> v[w + 1];
        ll so = 1;
        if (n > m)
        {
            so = 0;
        }
        for (ll i = w / m; i >= 0; i--)
        {
            ll l = w - (m * i);
            v[l % n].push_back({l / n, i});
        }
        ll f = 1;
        for (ll i = 0; i <= w; i++)
        {
            if (v[i].size() > 0)
            {
                f = 0;
                if (so == 0)
                    sort(v[i].begin(), v[i].end(), cmp1);
                else
                    sort(v[i].begin(), v[i].end(), cmp2);
                cout << v[i][0].first << " " << v[i][0].second << "\n";
                break;
            }
        }
        if (f == 1)
            cout << "0 0\n";
    }

    return 0;
}