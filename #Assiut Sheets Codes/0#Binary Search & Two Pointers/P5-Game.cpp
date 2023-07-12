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
int n,q,m,u;
void WORKER()
{
    //Write the code here
    cin >> n >> q;
    vi v(n);cin(v);
    sort(all(v));
    while(q--)
    {
        int k;cin >> k;
        int idx = upper_bound(v.begin(),v.end(),k) - v.begin();
        cout << (idx == n ? -1 : v[idx] ) << el;
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

