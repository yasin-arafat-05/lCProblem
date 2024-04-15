#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

#define yasin {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
typedef long long int ll;

void solve(){
    vector<int> v;
    for(int i = 0;i<3;i++){
        ll k;
        cin>>k;
        v.push_back(k);
    }
    sort(v.begin(),v.end());
    cout<<v[1]<<endl;
}


int main(){
    ll t;cin>>t;
    while(t--){
        solve();
    }
}