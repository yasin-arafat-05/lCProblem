#include<iostream>
#include<vector>
#include<algorithm>
#define yasin {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
typedef long long int ll;
using namespace std;
void solve(){
    ll k;cin>>k;
    vector<ll> v(0,0);
    for(ll i=0;i<k;i++){
        ll m;cin>>m;v.push_back(m);
    }
    sort(v.begin(),v.end(),greater<ll>());
    for(auto it = v.begin();it!=v.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}
int main(){
yasin 
ll t;cin>>t;
while(t--)
solve();
}