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
int n,k;
cin>>n>>k;
if(n%k!=0){
cout<<1<<endl;
cout<<n<<endl;
}
else{
    cout<<2<<endl;
    cout<<n-1<<" "<<1<<endl;
}
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