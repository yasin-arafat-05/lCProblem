#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
#define yasin {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
typedef long long int ll;
using namespace std;
void solve(ll n){
    while(n--){
        ll m;cin>>m;
        map<ll,ll> fre;
        vector<ll> arr(0,0);
        for(ll i=0,k;i<m;i++){
            cin>>k;
            arr.push_back(k);
            fre[arr[i]]++;
        }
        ll dist = fre.size();
        
        ll maxi = 0;
        for(auto var = fre.begin();var!=fre.end();var++){
            maxi = max(maxi,var->second);
        }
        if(dist>maxi){
            cout<<maxi<<endl;
        }else if(dist==maxi){
            cout<<(dist-1)<<endl;
        }else{
            cout<<dist<<endl;
        }

    }
}

int main(){
yasin
ll n;cin>>n;
solve(n);
}