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
int n,k;
vector<ll> v;
ll sum,mid;
bool greedSagheer()
{

    vector<ll> prices(n);
    for(int i = 0; i < n; i++)
    {
        prices[i] = v[i] + mid*(i+1);
    }
    sort(prices.begin(),prices.end());
    sum = 0;
    for(int i = 0; i < mid; i++)
    {
        sum+= prices[i];
    }
    return sum <= k;
}
void WORKER()
{
    //Write the code here
   cin >> n>>k;
    v.resize(n);
    cin(v);
   int l = 0;
   int r = n;
   int ans = 0;
   ll cost = OO;
   while(l <= r)
   {
        mid = l + (r- l)/2;
       if(greedSagheer())
       {
           ans = mid;
           cost = sum;
           l = mid+1;
       }else
       {
           r = mid - 1;
       }
   }
   cout << ans << " " << cost <<  el;


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
