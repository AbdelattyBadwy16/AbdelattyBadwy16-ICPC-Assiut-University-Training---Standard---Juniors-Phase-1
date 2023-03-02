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
struct one
{
    string s;
    int sum,a,b,c,d;
};
bool cmp(one a,one b)
{
    if(abs(a.sum-b.sum)>10)return a.sum>b.sum;
    else return a.s<b.s;
}
int main()
{
	abdo();
	int n;
	cin>>n;
	one arr[n];
	for(int i=0 ; i<n ; i++)
    {
        cin>>arr[i].s>>arr[i].a>>arr[i].b>>arr[i].c>>arr[i].d;
        arr[i].sum=arr[i].a+arr[i].b+arr[i].c+arr[i].d;
    }
	sort(arr,arr+n,cmp);

	for(int i=0 ;i<n ; i++)
    {
        cout<<arr[i].s<<" "<<arr[i].sum<<" "<<arr[i].a<<" "<<arr[i].b<<" "<<arr[i].c<<" "<<arr[i].d<<endl;
    }
return 0;
}