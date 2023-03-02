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
#include <string.h>
#define ll long long
#define tc int t; cin >> t; while(t--)
#define endl "\n"
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
using namespace std;

void abdo()
{

     ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main()
{
	abdo();
ll n,m;
cin>>n>>m;
int arr[n];
rep(i,n)cin>>arr[i];
int l=0,r=0,ans=n+1,sum=0;
//rep(i,n)cout<<arr[i]<<" ";
//cout<<endl;

while(l<n)
{
    while(l<n && sum<m)
    {
        sum+=arr[l];
        l++;
    }
   // cout<<l<<"ss"<<endl;
   while(r<n && sum>=m)
    {
        ans=min(ans,l-r);
        sum-=arr[r];
        r++;
     //   cout<<ans<<endl;
    }
  //  cout<<ans<<endl;

}
if(ans==n+1)cout<<-1;
else
cout<<ans;
return 0;
}
 