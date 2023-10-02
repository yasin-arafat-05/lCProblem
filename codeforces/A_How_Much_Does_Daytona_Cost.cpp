#include<iostream>
#include<vector>
typedef long long int ll;
using namespace std;
void solve(ll n){
    while(n--){
        ll a,b,ans=-1;cin>>a>>b;
        for(ll i=0,k;i<a;i++){
            cin>>k;
            if(k==b){
                ans = 1;
            }
        }
        if(ans==1){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
    ll n;cin>>n;
    solve(n);
}