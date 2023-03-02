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

int n,m,c=0,x;
cin>>n>>m;
int arr[n];
rep(i,n)cin>>arr[i];
sort(arr,arr+n);
int ans=INT_MIN;
int l=0,r=arr[n-1],mid;
//cout<<a<<endl;
while(l<r)
{
    mid=(l+r)/2; x=arr[0];c=m-1;
    for(int j=1 ;j<n ; j++)
    {
        if(abs(arr[j]-x)>=mid){
            c--;
            if(c==0)
            break;
            x=arr[j];
        }
    }
   // cout<<c<<mid<<endl;
    if(c==0)
    {
    if(mid>ans)
    ans=mid;
    l=mid+1;
    }else
    r=mid;
}
cout<<ans;
return 0;
}
 