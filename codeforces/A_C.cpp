#include<iostream>
#include<algorithm>
typedef long long int ll;
using namespace std;
void solve(ll n){
    while(n--){
        ll a,b,c,ans=0;
        cin>>a>>b>>c;
        while(a<=c || b<=c){
            if(b<a){
            swap(a,b);
         }
          a +=b;
          ans++;
        } 
        cout<<(ans-1)<<endl;
    }
}
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
    ll n;cin>>n;
    solve(n);
}