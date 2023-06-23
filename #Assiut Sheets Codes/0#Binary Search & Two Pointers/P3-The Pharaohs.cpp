
/*
(اللهم صلْ وسلم وزد وبارك على سيدنا محمد )

꧁IslaM_SobhY꧂

 */
#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef vector<long long> vl;
typedef vector<pair<int,int>> vp;
#define all(v) v.begin(),v.end()
#define sz(x) x.size()
#define SUPERPOWER ios_base::sync_with_stdio(false); cout.tie(0);
#define cin(v) for(auto &i:v)cin>>i
#define cout(v) for(auto &i:v)cout<<i<< " "
#define ll long long
#define  el "\12"
#define format(n) fixed<<setprecision(n)
bool On(int n,int k)
{
    return (n | (1 << k));
}
bool Off(int n,int k)
{
    return (n & ~(1 << k));
}
bool isOn(int n,int k)
{
    return ((n >> k) & 1);
}
const int N = 1e6 + 7;
bool is_Prime[N];
void sieve(ll K)
{
    fill(is_Prime,is_Prime+N,true);
    is_Prime[0] = is_Prime[1] = false;
    for(ll i = 2; i*i < K;i++)
    {
        if(is_Prime[i])
        {
            for(ll j = i*i; j < N; j+=i)
            {
                is_Prime[j] = false;
            }
        }
    }
}
int fixMod(int a,int b)
{
    return (a%b + b)%b;

}
string toBinary(ll n)
{
    string ret = "";
    for(int i = 31; i >= 0; i--)
    {
        ret+=to_string(isOn(n,i));
    }
    return ret;
}
ll toDecimal(string s)
{
    ll ans = 0;
    reverse(all(s));
    for(int i = 0; i < sz(s); i++)
    {
        ans +=((s[i] - '0')*((ll)1 << i));
    }
    return ans;
}

void WORKER()
{
    //Write the code here
    ll n;cin >> n;
    int l = 1;
    int r = 2*1e9 + 7;
    while (l <= r)
    {
        ll row = l + (r - l)/2;
        ll rightBlock = (row*(row+1))/2;
        ll leftBlock  = rightBlock - row + 1;
        if(n >= leftBlock && n <= rightBlock)
        {
            cout << row << el;
            break;
        }else if(n < leftBlock)
        {
            r = row - 1;
        }else if(n > rightBlock)
        {
            l = row + 1;
        }
    }

}

int main() {
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
     SUPERPOWER;
int t = 1;cin >> t;
while(t--)
{
    WORKER();
}
  return 0;
}

