/*


  ▄████  ██▓     ██▓▄▄▄█████▓ ▄████▄   ██░ ██
 ██▒ ▀█▒▓██▒    ▓██▒▓  ██▒ ▓▒▒██▀ ▀█  ▓██░ ██▒
▒██░▄▄▄░▒██░    ▒██▒▒ ▓██░ ▒░▒▓█    ▄ ▒██▀▀██░
░▓█  ██▓▒██░    ░██░░ ▓██▓ ░ ▒▓▓▄ ▄██▒░▓█ ░██
░▒▓███▀▒░██████▒░██░  ▒██▒ ░ ▒ ▓███▀ ░░▓█▒░██▓
 ░▒   ▒ ░ ▒░▓  ░░▓    ▒ ░░   ░ ░▒ ▒  ░ ▒ ░░▒░▒
  ░   ░ ░ ░ ▒  ░ ▒ ░    ░      ░  ▒    ▒ ░▒░ ░
░ ░   ░   ░ ░    ▒ ░  ░      ░         ░  ░░ ░
      ░     ░  ░ ░           ░ ░       ░  ░  ░

*/
#include <bits/stdc++.h>
#define ll long long
#define tc int t; cin >> t; while(t--)
#define endl "\n"
#define all(v) v.begin(),v.end()
#define dd int n; cin>>n; int arr[n]; for(int i=0 ; i<n ; i++)cin>>arr[i];
using namespace std;
void abdo()
{

     ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
struct aa
{
    string s;
    ll a,b,c,d,sum;
};

bool cmp(aa a,aa b)
{
    if(a.sum!=b.sum)return a.sum>b.sum;
    else return a.s<b.s;
}
int main()
{
    abdo();
    int n;
    cin>>n;
    vector<aa>v(n);
    for(int i=0 ; i<n ; i++)
    {
        cin>>v[i].s>>v[i].a>>v[i].b>>v[i].c>>v[i].d;
        v[i].sum=v[i].a+v[i].b+v[i].c+v[i].d;
    }
sort(all(v),cmp);
for(int i=0 ; i<n ; i++)
{
    cout<<v[i].s<<" "<<v[i].sum<<" "<<v[i].a<<" "<<v[i].b<<" "<<v[i].c<<" "<<v[i].d<<endl;
}
    return 0;
}