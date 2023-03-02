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


int main()
{
abdo();
ll n,q;
string s;
ll a;
cin>>n>>q;
ll arr[n];
for(int i=0 ;i<n ; i++)
    cin>>arr[i];

    sort(arr,arr+n);
    for(int i=0; i<q ; i++)
    {
        cin>>s;
        if(s=="binary_search")
        {
            cin>>a;
            int x=binary_search(arr,arr+n,a);
            if(x==0)cout<<"not found"<<endl;
            else cout<<"found"<<endl;
        }else if(s=="lower_bound")
        {
            cin>>a;
            int l=lower_bound(arr,arr+n,a)-arr;
            if(l==n)cout<<-1<<endl;
            else cout<<arr[l]<<endl;
        }else if(s=="upper_bound")
        {
            cin>>a;
            int u=upper_bound(arr,arr+n,a)-arr;
            if(u==n)cout<<-1<<endl;
            else cout<<arr[u]<<endl;
        }
    }
    return 0;
}