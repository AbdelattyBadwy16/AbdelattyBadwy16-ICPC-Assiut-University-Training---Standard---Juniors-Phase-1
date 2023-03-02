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
   int n,m,flag=0,x;
   cin>>n>>m;
   int arr[m*2+1]={0};
   for(int i=0 ; i<n ;i++)
   {
       cin>>x;
       arr[x+m]++;
   }
   for(int i=0 ; i<2*m+1;i++)
   {
       if(arr[i]==0)
       {
           cout<<i-m;
           break;
       }
   }
    return 0;
}