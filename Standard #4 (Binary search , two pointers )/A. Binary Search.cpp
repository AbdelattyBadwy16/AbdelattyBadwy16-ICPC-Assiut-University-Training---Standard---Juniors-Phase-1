#include <bits/stdc++.h>
#include <string.h>
#define ll long long
#define tc int t; cin >> t; while(t--)
#define endl "\n"
#define loop(a, b, c) for(int i = a ; i < (b); i += c)
#define all(vec) vec.begin(),vec.end()
#define mem(arr,value) memset(arr, value, sizeof(arr))
#define rall(vec) vec.rbegin(),vec.rend()
#define sz size()
#define Pair pair <int,int>
#define ll long long
#define ld long double
#define ull unsigned long long
#define mod  1000'000'007
#define INF 2000'000'000
#define pi 3.141592
#define rep(i,n) for(int i=0;i<(int)n;i++)
#define input freopen("stand.in","r",stdin);
#define output freopen("stand.out","w",stdout);
#define Glitch ios_base::sync_with_stdio(false);cin.tie(0);
//#define dirx int dx[8] = { 1, 0, -1, 0, -1, 1, -1, 1 };
//#define diry int dy[8] = { 0, 1, 0, -1, -1, 1, 1, -1 };
using namespace std;

int main()
{

    Glitch;
    ll n,q; cin>>n>>q;
    vector<pair<ll,ll>>v;
    rep(i,n){
    ll x,y; cin>>x>>y;
    v.push_back({x,y});
    }
    sort(all(v));
    while(q--){
        int l=0,r=n-1;
        string s; cin>>s;
        ll x,y; cin>>x>>y;
        int in=-1;
        if(s=="lower"){
        pair<ll,ll>ans;
        ans.first=0;
        ans.second=0;
        while(l<=r){
            int md=(l+r)/2;
           // cout<<md<<" fdfd"<<l<<" "<<r<<endl;
            if((v[md].first<x) ||(v[md].first==x && v[md].second<y)){
                if(v[md].first>ans.first){
                    in=md;
                    ans.first=v[md].first;
                    ans.second=v[md].second;
                }else if((v[md].first==ans.first&&v[md].first==x && v[md].second<y) || (v[md].first==ans.first && v[md].first!=x && v[md].second>ans.second)){
                    in=md;
                    ans.first=v[md].first;
                    ans.second=v[md].second;
            }

                l=md+1;
            }else r=md-1;
            //cout<<in<<endl;
        }

        cout<<in<<endl;
        }else if(s=="upper"){
        pair<ll,ll>ans;
        ans.first=INT_MAX;
        ans.second=INT_MAX;
        while(l<=r){
            int md=(l+r)/2;
           // cout<<md<<" fdfd"<<l<<" "<<r<<endl;
            if((v[md].first>x) ||(v[md].first==x && v[md].second>y)){
                if(v[md].first<ans.first){
                    in=md;
                    ans.first=v[md].first;
                    ans.second=v[md].second;
                }else if((v[md].first==ans.first&&v[md].first==x && v[md].second>y) || (v[md].first==ans.first && v[md].first!=x && v[md].second<ans.second)){
                    in=md;
                    ans.first=v[md].first;
                    ans.second=v[md].second;
            }

                r=md-1;
            }else l=md+1;
            //cout<<in<<endl;
        }

        cout<<in<<endl;
        }else if(s=="find"){
        bool flag=0;
        while(l<=r){
            int md=(l+r)/2;
           // cout<<md<<" fdfd"<<l<<" "<<r<<endl;
            if(v[md].first==x&&v[md].second==y){
               cout<<"found"<<endl;flag=1;
               break;
            }else if(v[md].first>x || (v[md].first==x && v[md].second>y))r=md-1;
            else l=md+1;

        }
        if(!flag)
        cout<<"not found"<<endl;
        }

    }
    return 0;

}