#include<iostream>
#include<vector>
#define yasin {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
typedef long long int ll;
using namespace std;
void solve(){
    string n;cin>>n;
    int k = n.size() - 1;
    if((n[k]-'0')%2==0){
        cout<<0<<endl;
    }else if((n[0]-'0')%2==0){
        cout<<1<<endl;
    }else{
        int ans = 0;
        for(int i = 1;i<k;i++){
            if((n[i]-'0')%2==0){
                ans = 1;
                break;
            }
        }
        if(ans==1){
            cout<<2<<endl;
        }else{
            cout<<-1<<endl;
        }
    }
}
int main(){
yasin 
ll t;cin>>t;
while(t--)
solve();
}