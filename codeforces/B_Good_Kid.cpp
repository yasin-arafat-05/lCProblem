#include<iostream>
#include<vector>
#include<algorithm>
typedef long long int ll;
using namespace std;
void solve(ll n){
    while(n--){
    vector<ll> v(0,0);ll k;
    cin>>k;
        while(k--){
            ll m;cin>>m;
            v.push_back(m);
        }
        sort(v.begin(),v.end());
        v[0] +=1;
        ll ans = 1;
        for(int i=0;i<v.size();i++){
            ans *=v[i];
        }
        cout<<ans<<endl;
    }
}

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
    ll n;cin>>n;
    solve(n);
}