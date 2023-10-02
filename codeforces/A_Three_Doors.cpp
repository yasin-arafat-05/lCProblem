#include<iostream>
#include<vector>
typedef long long int ll;
using namespace std;
void solve(ll n){
    while(n--){
        vector<int> v(0,0);
        int f;cin>>f;
        for(int i=0;i<3;i++){
            int k;cin>>k;
            v.push_back(k);
        }
        int k = v[f-1];
        int l = v[k-1];
        if(k==0 || l==0){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
        
    }

}
int main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
ll n;cin>>n;
    solve(n);
}