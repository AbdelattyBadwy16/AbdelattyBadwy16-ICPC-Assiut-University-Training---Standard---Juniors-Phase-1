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
ll n,m,q;
cin>>n>>m>>q;
vector<vector<ll>>arr(n+1,vector<ll>(m+1));
for (int  i=1;i<=n;i++)
{
    for (int j=1;j<=m;j++)
    {
        cin>>arr[i][j];
    }
}

    for (int  i = 1; i <=n; i++)
    {
        for (int  j = 1; j <=m; j++)
        {
              arr[i][j] += arr[i][j-1];
        }

    }
    for ( int i = 1; i <=n; i++)
    {
          for ( int j = 1; j <=m; j++)
          {
                arr[i][j] += arr[i-1][j];
          }
    }
int x1,y1,x2,y2;
while (q--)
{
  cin>>x1>>y1>>x2>>y2;
  cout <<arr[x2][y2] - arr[x1-1][y2] -arr[x2][y1-1] + arr[x1-1][y1-1]<<endl;
}
    return 0;
}