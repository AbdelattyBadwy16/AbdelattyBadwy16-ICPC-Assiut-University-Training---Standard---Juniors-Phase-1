/**
 *    author: Abdelatty Badwy
 *    Handel: Glitch00
 *    I hope to get accept after these attempts
**/
#include <bits/stdc++.h>
#include <string.h>
#define ll long long
#define tc int t; cin >> t; while(t--)
#define endl "\n"
#define clr(v, d)		memset(v, d, sizeof(v))
#define loop(a, b, c) for(int i = a ; i < (b); i += c)
#define all(vec) vec.begin(),vec.end()
#define rall(vec) vec.rbegin(),vec.rend()
#define sz size()
#define Pair pair <int,int>
#define ll long long
#define ull unsigned long long
#define mod  1000'000'007
#define INF 2000'000'000
#define pi 3.14159
#define rep(i,n) for(int i=0;i<(int)n;i++)
#define input freopen("stand.in","r",stdin);
#define output freopen("stand.out","w",stdout);
// priority_queue<int,vector<int>,greater<int>>pp; ::min to max
//#define dirx int dx[8] = { 1, 0, -1, 0, -1, 1, -1, 1 };
//#define diry int dy[8] = { 0, 1, 0, -1, -1, 1, 1, -1 };
using namespace std;
int v[100000+7]={0};
void abdo()
{

     ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}


int main()
{

abdo();
int n,q,a;
cin>>n>>q;
map<int,int>ss;
for(int i=0 ;i<n ; i++)
{
    cin>>a;
    ss[a]++;
}
int i;
set<int>pp;
for(auto it:ss)
{
    i=it.first;
    pp.insert(i);
}

for(int i=1 ; i<=100007 ;i++)
{
    if(pp.count(i))
    {
        v[i]=v[i-1]+1;
    }else
    {
        v[i]=v[i-1];
    }
}
ll x;
while(q--)
{
    cin>>x;
    cout<<v[x-1]<<" "<<pp.sz-v[x]<<endl;
}
    return 0;
}