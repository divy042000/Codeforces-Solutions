//Link : 
/* Notes :

*/
#include<bits/stdc++.h>
using namespace std;

int main(){
#define int long long int
ios_base::sync_with_stdio(false); cin.tie(NULL);
int t;
cin>>t;
while(t--){
int n,k;
cin>>n>>k;
int maximum=max(n,k);
int minimum=min(n,k);
string str="";
for(int i=0;i<minimum;i++)
{
str=str+"01";
}
if(maximum==k)
{
    for(int i=0;i<maximum-minimum;i++)
    {
    str=str+'1';
    }
}
else
{
    for(int i=0;i<maximum-minimum;i++)
    {
    str=str+'0';
    }
}
cout<<str<<endl;
}
return 0;
}