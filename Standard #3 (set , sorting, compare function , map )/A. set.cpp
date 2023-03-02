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


int main()
{
	abdo();
	set<int>ss;
	int n;
	cin>>n;
	string s;
    int x;
    for(int i=0 ;i<n ;i++)
    {
        cin>>s>>x;
        if(s=="insert")
        {
            ss.insert(x);
        }else if(s=="find")
        {
            auto it=ss.find(x);
            // cout<<*it<<endl;
            if(*it==x)
              cout<<"found"<<endl;
            else cout<<"not found"<<endl;
        }else if(s=="lower_bound")
          {
              auto it=ss.lower_bound(x);
            if(ss.size()==*it && x>ss.size())
              cout<<-1<<endl;
            else cout<<*it<<endl;
          }else
          {
              auto it=ss.upper_bound(x);
            if(ss.size()==*it && x>ss.size())
              cout<<-1<<endl;
            else cout<<*it <<endl;
          }

    }

return 0;
}