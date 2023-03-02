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
int n,q,c=0;
cin>>n>>q;
int z,arr;
vector<int> fre(n+1,0);
for(int i=0 ; i<q ; i++)
{
    cin>>z>>arr;
    if(z==1)
    {
    fre[arr]++;
    }else
    {
    cout<<fre[arr]<<endl;
    }
}
return 0;
 
}
 