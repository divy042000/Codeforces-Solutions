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
string str;
cin>>str;
if(t<26)
{
    cout<<"NO"<<endl;
}
else
{
    int count=0;
    vector<char> v;
    unordered_map<char,int> m;
    for(int i=0;i<t;i++)
    {
        v.push_back(tolower(str[i]));
    }
    for(int i=0;i<t;i++)
    {
     m[v[i]]++;
    }
    
    if(m.size()==26)
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