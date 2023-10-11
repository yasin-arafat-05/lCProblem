#include<iostream>
#include<vector>
#define yasin {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
typedef long long int ll;
using namespace std;
void solve(){
    ll n;cin>>n;
    ll rem = n%3;
    if(rem<2){
        cout<<((n/3)+rem)<<" "<<(n/3)<<endl;
    }else{
        cout<<(n/3)<<" "<<((n/3)+1)<<endl;
    }
}
int main(){
yasin 
ll t;cin>>t;
while(t--)
solve();
}