#include<iostream>
typedef long long int ll;
using namespace std;
void solve(ll n){
    while(n--){
        ll a,b,c;cin>>a>>b>>c;
        ll out = (a+b+c)/2;
        cout<<out<<endl;
    }
}
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
ll n;cin>>n;solve(n);
}