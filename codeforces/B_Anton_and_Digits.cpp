#include<iostream>
#include<algorithm>
typedef long long int ll;
using namespace std;
void solve(ll a,ll b,ll c,ll d){
    ll mini = min(a,min(c,d));
    ll mini2=0;
    a -=mini;
    if(a>0){
      mini2 = min(a,b);
    }
    cout<<(mini*256)+(mini2*32)<<endl;
}
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    solve(a,b,c,d);
}