#include<iostream>
#include<vector>
#define ya ios_base::sync_with_stdio(0);
#define si cin.tie(0);
#define in cout.tie(0);
typedef long long int ll;
using namespace std;
void solve(ll n){
    while(n--){
        ll k;cin>>k;
        vector<ll> v(0,0);
        for(ll i=0,b;i<k;i++){
            cin>>b;v.push_back(b);
        }
        int ans = 1;
        for(int i=0;i<(v.size()-2);i++){
            if(v[i]%2 != v[i+2]%2){
                ans = 0;
            }
        }
        if(ans){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}
int main(){
ya si in 
ll n;cin>>n;
solve(n);
}