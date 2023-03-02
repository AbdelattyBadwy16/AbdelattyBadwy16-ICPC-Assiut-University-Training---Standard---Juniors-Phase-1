/*
    Abdelatty Badwy
        Glitch00
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
   ll n,q,l,r;
   cin>>n>>q;
   int arr[n+1];
   vector<ll>ss(n+1,0);
   ll sum=0;
   for(int i=1 ; i<=n ; i++)
   {
       cin>>arr[i];
       sum+=arr[i];
       ss[i]=sum;
   }
   for(int i=0 ; i<q ; i++)
   {
       cin>>l>>r;
       if(l==1)
       {
           cout<<ss[r]<<endl;;
           continue;
       }
       cout<<ss[r]-ss[l-1]<<endl;
   }
    return 0;
}