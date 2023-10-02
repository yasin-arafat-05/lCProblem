#include<iostream>
#include<vector>
typedef long long int ll;
using namespace std;
void solve(ll n){
vector<vector<int>> v = {
    {1,1,1,1,1,1,1,1,1,1},
    {1,2,2,2,2,2,2,2,2,1},
    {1,2,3,3,3,3,3,3,2,1},
    {1,2,3,4,4,4,4,3,2,1},
    {1,2,3,4,5,5,4,3,2,1},
    {1,2,3,4,5,5,4,3,2,1},
    {1,2,3,4,4,4,4,3,2,1},
    {1,2,3,3,3,3,3,3,2,1},
    {1,2,2,2,2,2,2,2,2,1},
    {1,1,1,1,1,1,1,1,1,1}
};
    while(n--){
        ll sum = 0;
        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                char ch;cin>>ch;
                if(ch=='X'){
                    sum+=v[i][j];
                }
            }
        }
        cout<<sum<<endl;
    }
}
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
    ll n;cin>>n;
    solve(n);
}