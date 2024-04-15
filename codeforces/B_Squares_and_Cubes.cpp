#include<iostream>
#include<set>
#include<math.h>

using namespace std;
typedef long long int ll;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
 ll t;cin>>t;
 while(t--){
    ll n;cin>>n;
    set<ll> k = {};
    ll square = pow(n,(1/2))+1;
    ll cuve = pow(n,(1/3))+1;
    cout<<square<<" "<<cuve<<endl;
    for(ll i=1;i<=square;i++){
        k.insert(i*i);
    }
    for(int i=1;i<=cuve;i++){
        k.insert(i*i*i);
    }
    cout<<k.size()<<endl;
 }
}