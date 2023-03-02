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
   int n,q;
   cin>>n>>q;
   int arr[n];
   for(int i=0 ; i<n ; i++)cin>>arr[i];
   map<int,int>ss;
   for(int i=0 ; i<n ; i++)
   {
       ss[arr[i]]++;
   }
   int c=ss.size();
  pair<int,int>ff[c];
  int i=0;
   for(auto it : ss)
   {
       ff[i].first=it.first;
       ff[i].second=it.second;
       i++;
   }
   int x=0;
if(c>=q){
        cout<<"YES"<<endl;
  for(int i=0 ;i<n ;i++)
  {
      if(x==q)break;
      for(int j=0 ;j<c;j++)
      {
          if(arr[i]==ff[j].first && ff[j].second!=0)
          {
              cout<<i+1<<" ";
              ff[j].second=0;
              x++;
      }
  }
  }
}else cout<<"NO";
return 0;
}