#include<iostream>
#include<algorithm>
#include<vector>
typedef long long int ll;
using namespace std;
void solve(ll n){
    while(n--){
        ll k,ans=0,odd=0,even=0;cin>>k;
        vector<ll> v(0,0);
        for(ll i=0,m;i<k;i++){
            cin>>m;
            if(m&1){
                odd++;
            }else{
                even++;
            }
        }
        ll x = min(odd,even);
        cout<<x<<endl;
    }
}
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
    ll n;cin>>n;
    solve(n);
}