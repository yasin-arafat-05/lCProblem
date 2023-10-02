#include<iostream>
#include<vector>
typedef long long int ll;
using namespace std;
void solve(ll n){
    while(n--){
        ll k;cin>>k;
            ll cnt=0;
            for(int i=1;;i++){
               if(i%2==0 || i%3==0){
                 i++;
               }
               i++;
               cnt++;
               cout<<i<<" ";
               if(cnt==k){
                break;
               }
            }  
            cout<<endl;
    }
}

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
    ll n;cin>>n;
    solve(n);
}