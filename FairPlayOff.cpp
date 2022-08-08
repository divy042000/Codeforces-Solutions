//Link : 
/* Notes :

*/
#include<bits/stdc++.h>
using namespace std;

int main(){
#define int long long int
ios_base::sync_with_stdio(false); cin.tie(NULL);
int t,n;
cin>>t;
while(t--){
int a,b,c,d;
cin>>a>>b>>c>>d;
int k=max(a,b);
int l=max(c,d);
int x=min(a,b);
int y=min(c,d);
if(k>x && k>y && l>x && l>y)
{
    cout<<"YES"<<endl;
}
else
{
    cout<<"NO"<<endl;
}
}
return 0;
}