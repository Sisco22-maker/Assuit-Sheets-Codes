/*
(اللهم صلْ وسلم وزد وبارك على سيدنا محمد )

꧁IslaM_SobhY꧂
 */
#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
#define all(v) v.begin(),v.end()
#define sz(x) x.size()
#define SUPERPOWER ios_base::sync_with_stdio(false); cout.tie(0);
#define cin(v) for(auto &i:v)cin>>i
#define cout(v) for(auto &i:v)cout<<i<< " "
#define ll long long
#define  el "\12"
#define format(n) fixed<<setprecision(n)
const int N = 1e5 + 7;
bool vis[N];
vector<int>graph[N];
const int OO = 0x3f3f3f3f;
int dx[] = {1,-1,0,0};
int dy[] = {0,0,1,-1};
int n,q,m,u,s;
vi v;
bool exist(int k)
{
    int l = 0;
    int r = n - 1;
    while(l <= r)
    {
        int mid = l + (r - l)/2;
        if(v[mid] > k)
        {
            r = mid - 1;
        }else if(v[mid] < k)
        {
            l = mid + 1;
        }else
        {
            return true;
        }
    }
    return false;
}
void WORKER()
{
    map<int,int>mp;
    cin >> n >> q;
    v.resize(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
        mp[v[i]] = i + 1;
    }
    sort(all(v));
    while(q--)
    {
        int x;cin >> x;
        if(exist(x))
        {
            cout << "Yes" << " " << mp[x] << el;
        }else
        {
            cout << "No" << el;
        }
    }



}

int main() {
     //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
     SUPERPOWER;
int t = 1;//cin >> t;
while(t--)
{
    WORKER();
}
  return 0;
}
