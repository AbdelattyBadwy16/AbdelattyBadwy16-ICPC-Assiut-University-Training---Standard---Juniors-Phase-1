#include <bits/stdc++.h>
#include <string.h>
#define ll long long
#define tc int t; cin >> t; while(t--)
#define endl "\n"
#define loop(a, b, c) for(int i = a ; i < (b); i += c)
#define all(vec) vec.begin(),vec.end()
#define rall(vec) vec.rbegin(),vec.rend()
#define sz size()
#define Pair pair <int,int>
#define ll long long
#define ull unsigned long long
#define mod  1000'000'007
#define INF 2000'000'000
#define pi 3.14159
#define rep(i,n) for(int i=0;i<(int)n;i++)
#define input freopen("stand.in","r",stdin);
#define output freopen("stand.out","w",stdout);
#define ON(n,k) ((n)|(1<<(k)))
#define OFF(n,k) ((n)& ~(1<<(k)))
#define ISON(n,k) (((n)>>(k))& 1)
//queue deque bitset to_ullong
//#define dirx int dx[8] = { 1, 0, -1, 0, -1, 1, -1, 1 };
//#define diry int dy[8] = { 0, 1, 0, -1, -1, 1, 1, -1 };
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
ll n,q,num;
cin>>n>>q;
bitset<32>s(n);
bitset<32>ans;
while(q--){
	ll x;
	cin>>x;
	if(x==1){
		rep(i,32){
			if(s[i]==0){
				s[i]=1;
				break;
			}
		}
		if(s[31]==1){
		rep(i,32){
			ans[i]=!s[i];
		}
		num=ans.to_ullong();
		cout<<(num+1)*-1<<endl;
		}else{
			rep(i,32){
			ans[i]=s[i];
		}
		num=ans.to_ullong();
		cout<<num<<endl;
		}
		
	}else if(x==2){
			rep(i,32){
			if(s[i]==1){
				s[i]=0;
				break;
			}
		}
		if(s[31]==1){
		rep(i,32){
			ans[i]=!s[i];
		}
		num=ans.to_ullong();
		cout<<(num+1)*-1<<endl;
		}else{
			rep(i,32){
			ans[i]=s[i];
		}
		num=ans.to_ullong();
		cout<<num<<endl;
		}
		
	}else if(x==3){
			rep(i,32){
			if(s[i]==1){
				break;
			}else s[i]=1;
		}
		if(s[31]==1){
		rep(i,32){
			ans[i]=!s[i];
		}
		num=ans.to_ullong();
		cout<<(num+1)*-1<<endl;
		}else{
			rep(i,32){
			ans[i]=s[i];
		}
		num=ans.to_ullong();
		cout<<num<<endl;
		}
		
	}else if(x==4){
			rep(i,32){
			if(s[i]==0){
				break;
			}else s[i]=0;
		}
		if(s[31]==1){
		rep(i,32){
			ans[i]=!s[i];
		}
		num=ans.to_ullong();
		cout<<(num+1)*-1<<endl;
		}else{
			rep(i,32){
			ans[i]=s[i];
		}
		num=ans.to_ullong();
		cout<<num<<endl;
		}
		
	}else {
		int cnt=0;
			rep(i,32){
			if(s[i]==1){
				cnt++;
			}
		}
		if(cnt==1)cout<<"is power of two"<<endl;
		else cout<<"not power of two"<<endl;
	}
}
//cout<<ans<<endl;
return 0;
}