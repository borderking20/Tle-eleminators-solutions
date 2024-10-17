#include<bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define boost ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long int
#define mem(a,b) memset(a,b,sizeof(a))
#define all(x) x.begin(),x.end()
#define allr(x) x.rbegin(),x.rend()
#define pii pair<int,int>
#define pll pair<long long int,long long int>
#define pff pair<float,float>
#define pdd pair<double,double>
#define mod 1000000007
#define PI 3.1415926535897932384626
#define pb push_back
#define mp make_pair
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
using namespace std;
ll power(ll  b,ll p,ll modn=INT64_MAX)
{
if(p==0)
return 1;
ll temp=power(b,p/2,modn);
temp=(temp*temp)%modn;
if(p%2==1)
temp=(temp*b)%modn;
return temp;
}
string revstring(string s)
{
string t=s;
reverse(all(t));
return t;
}
void solve()
{
int n;
cin>>n;
vector<int> v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}
int ans=0;
for(int i=0;i+1<n;i++){
    ans=max(ans,v[i]-v[i+1]);
}
ans=max(ans,v[n-1]-v[0]);
int mini=INT_MAX;
for(int i=0;i+1<n;i++){
     mini=min(mini,v[i]);
 }
ans=max(ans,v[n-1]-mini);
 
int maxo=0;
for(int i=1;i<n;i++){
    maxo=max(maxo,v[i]);
}
ans=max(ans,maxo-v[0]);
cout<<ans<<endl;
}
int main()
{
boost
int t=1;
cin>>t;
while(t--)
{
solve();
}
return 0;
}