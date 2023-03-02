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
#define dd int n; cin>>n; int arr[n]; for(int i=0 ; i<n ; i++)cin>>arr[i];
using namespace std;
void abdo()
{

     ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
static int i=0;
int main()
{
    abdo();
int n,q;
cin>>n>>q;

vector<int>ss(n);
for(int i=0 ;i<n ; i++)
cin>>ss[i];
string s;
int a,b;
for(int i=0 ; i<q ; i++)
{
    n=ss.size();
    cin>>s;
    if(s=="pop_back")
    {
       ss.pop_back();
    }else if(s=="sort")
    {

        cin>>a>>b;
        sort(ss.begin()+a-1,ss.begin()+b);
    }else if(s=="back")
    {
        cout<<ss[ss.size()-1]<<endl;
    }else if(s=="front")
    {
        cout<<ss[0]<<endl;
    }else if(s=="push_back")
    {
        cin>>a;
        ss.push_back(a);
    }else if(s=="print")
    {
        cin>>a;
        cout<<ss[a-1]<<endl;
    }else if(s=="reverse")
    {
        cin>>a>>b;
        reverse(ss.begin()+a-1,ss.begin()+b);
    }
}
//for(int i=0 ;i<n ; i++)
//  cout<<ss[i];
    return 0;
}