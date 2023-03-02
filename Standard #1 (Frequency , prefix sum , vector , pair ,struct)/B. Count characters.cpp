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
int main()
{
abdo();
string s;
cin>>s;
int n=s.size();
char alphaup[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
char alphalo[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
vector<int> freup(52,0);
//vector<int> frelo(26,0);
for(int i=0 ; i<n; i++)
{
    if(s[i]>='A'&& s[i]<='Z')
    freup[s[i]-'A']++;
    else
    freup[s[i]-'a'+26]++;
}
for(int i=0 ; i<52 ; i++)
    {
        if(freup[i]!=0&& i<=26)
        cout<<alphaup[i]<<" "<<freup[i]<<endl;
        else if(freup[i]!=0&&i>26)
        cout<<alphalo[i-26]<<" "<<freup[i]<<endl;
    }
return 0;
}
 