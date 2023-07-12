/*
(اللهم صلْ وسلم وزد وبارك على سيدنا محمد )

꧁IslaM_SobhY꧂

 */
#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef vector<pair<int,int>> vp;
#define SUPERPOWER ios_base::sync_with_stdio(false); cout.tie(0);
#define cin(v) for(auto &i:v)cin>>i
#define cout(v) for(auto &i:v)cout<<i<< " "
#define ll long long
#define  el "\12"
#define format(n) fixed<<setprecision(n)

int Fixed_Window(int numbers[],bool sleep[],int k,int n)
{
    int window = 0;
    for(int i = 0; i < k; i++)
    {
        if(!sleep[i])
        window+=numbers[i];
    }
    int l = 0,r = k;
    int ans = window;
    while(r < n)
    {
        if(!sleep[r])
        window+=numbers[r];
        if(!sleep[l])
        window-=numbers[l];
        ans = max(ans,window);
        l++,r++;
    }
    return ans;
}

int main() {

int n,k;cin >> n >> k;
int numbers[n];
bool sleep[n];
for(int i = 0; i < n; i++)cin >> numbers[i];
for(int i = 0; i < n; i++)cin >> sleep[i];
int res =  Fixed_Window(numbers,sleep,k,n);
for(int i = 0; i < n; i++)
{
    if(sleep[i])res+=numbers[i];
}
cout << res << el;
  return 0;
}





 
