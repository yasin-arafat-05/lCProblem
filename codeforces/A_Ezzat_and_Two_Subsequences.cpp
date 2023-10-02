#include<iostream>
#include<algorithm>
#include<limits.h>
#include<iomanip>
typedef long long int ll;
using namespace std;
void solve(ll n){
    while(n--){
        ll k;cin>>k;ll sum =0,max =-1e9;
        for(int i=0,x;i<k;i++){
            cin>>x;
            if(max<x){
                max = x;
            }
            sum +=x;
        }
        double avg =(double) (sum-max)/(k-1);
        double ans = avg + max;
        cout<<setprecision(11)<<ans<<endl;
       //printf("%12lf\n",ans);
    }
}
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
    ll n;
    cin>>n;
    solve(n);
}