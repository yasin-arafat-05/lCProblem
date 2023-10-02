#include<iostream>
#include<algorithm>
typedef long long int ll;
using namespace std;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
    ll t; cin>>t;
    while(t--){
    ll a=0,b=0,c=0;
    cin>>a>>b>>c;
    if(b>a){
        swap(a,b);
    }
    ll res =0;
    while(a>b){
        a -=c;
        b +=c;
        res++;
    }
    cout<<res<<endl;
    }
}