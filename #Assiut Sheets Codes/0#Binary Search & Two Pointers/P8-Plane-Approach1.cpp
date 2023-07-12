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
int n,q,m,u,v,s;
void WORKER()
{
    cin >> n >> q;
    map<int,int>mp;
    for(int i = 1; i <=n; i++)
    {
        int x;cin >> x;
        mp[x] = i;
    }
    while(q--)
    {
        int x;cin >> x;
        if(mp[x])
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
