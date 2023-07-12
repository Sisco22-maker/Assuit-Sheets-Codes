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
const int OO = 0x3f3f3f3f;
int dx[] = {1,-1,0,0};
int dy[] = {0,0,1,-1};
ll MxFactor(vector<pair<int,int>> &v,int n,int f)
{
    int l = 0;
    int r = 0;
    ll mx = 0;
    ll sum = 0;
    while(r < n)
    {
        while(l < r && v[r].first - v[l].first >= f)
        {
            sum-=v[l].second;
            l++;
        }
        sum+=v[r].second;
        mx = max(mx,sum);
        r++;
    }
    return mx;
}
void WORKER()
{
    //Write the code here
    int n,f;cin >> n >> f;
 vector<pair<int,int>>v(n);
for(int i = 0; i < n; i++)
{
    cin >> v[i].first >> v[i].second;
}
sort(v.begin(),v.end());
cout << MxFactor(v,n,f) << el;


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

