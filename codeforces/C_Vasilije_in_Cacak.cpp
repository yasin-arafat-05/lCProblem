#include<iostream>
typedef long long int ll;
typedef double fl;
using namespace std;
void solve(ll n){
    while(n--){
        long long  int n,k,x,a,b;
        cin>>n>>k>>x;
        a=(k*(k+1))/2;
        b=(k*(2*(n-k+1)+(k-1)))/2;
        if(x<=b && x>=a)
        {
            cout<<"YES"<<endl;
        }
        else
        {
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