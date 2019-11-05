//nov long challenge
//https://www.codechef.com/NOV19B/problems/SC31
#include <bits/stdc++.h>
using namespace std;
int main() {
   int t;
   cin>>t;
   while(t--){
   int n;
   cin>>n;
    int ans[10]={0};
   for(int i=0;i<n;i++){
       string s;
       cin>>s;
       for(int i=0;i<10;i++){
                    if(s[i]=='0'){
                        ans[i]=0^ans[i];
                    }
                    if(s[i]=='1'){
                        ans[i]=1^ans[i];
                    }
       }
   }
   int count=0;

   for(int i=0;i<10;i++){
       if(ans[i]==1){
           count++;

       }
       //cout<<ans[i];
   }

   cout<<(count)<<endl;

   }


}

