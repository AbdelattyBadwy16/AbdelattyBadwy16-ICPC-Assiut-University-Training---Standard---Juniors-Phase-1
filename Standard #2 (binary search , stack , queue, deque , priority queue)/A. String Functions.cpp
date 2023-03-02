#include<bits/stdc++.h>
#include<math.h>
#include<algorithm>
using namespace std;

int main()
    {
   int n,c,a,b;
   char z;
   string s,q;
   cin>>n>>c;
   cin>>s;
   for(int i=0 ; i<c ; i++)
   {

       cin>>q;
       if(q=="pop_back")
       {
               s.pop_back();
       }else if(q=="back")
       {
               cout<<s.back()<<endl;
       }else if(q=="front")
       {
                cout<<s.front()<<endl;
       }else if(q=="push_back")
                {

                    cin>>z;
                    s.push_back(z);
                }else if(q=="print")
                {
                    int t;
                    cin>>t;
                    cout<<s[t-1]<<endl;
                }else if(q=="sort")
                {

                    cin>>a>>b;
                    sort(s.begin()+min(a,b)-1,s.begin()+max(a,b));
                }else if (q=="reverse")
                {

                    cin>>a>>b;
                    reverse(s.begin()+min(a,b)-1,s.begin()+max(a,b));
                }else if (q=="substr")
                {

                    cin>>a>>b;
                    for(int i=min(a,b)-1 ; i<=max(a,b)-1 ; i++)
                    {
                        cout<<s[i];
                    }
                    cout<<endl;
                }
   }
  return 0;
      }