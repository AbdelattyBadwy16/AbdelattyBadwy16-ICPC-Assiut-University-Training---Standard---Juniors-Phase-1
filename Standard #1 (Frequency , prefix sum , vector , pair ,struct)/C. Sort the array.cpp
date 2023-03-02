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
                             ░                
  /_\ | |__   __| | ___| | __ _| |_| |_ _   _ 
 //_\\| '_ \ / _` |/ _ \ |/ _` | __| __| | | |
/  _  \ |_) | (_| |  __/ | (_| | |_| |_| |_| |
\_/ \_/_.__/ \__,_|\___|_|\__,_|\__|\__|\__, |
                                        |___/ 
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
   int n;
   cin>>n;
   int arr[n];
   for(int i=0 ;i<n; i++)cin>>arr[i];
   sort(arr,arr+n);
   for(int i=0 ;i<n ;i++)cout<<arr[i]<<" ";
    return 0;
}