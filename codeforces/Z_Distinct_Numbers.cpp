#include<iostream>
#include<set>
using namespace std;
int main(){
    long long int l;
    cin>>l;
    set<int> m;
    for(int i=0;i<l;i++){
        long long int temp;cin>>temp;
        m.insert(temp);
    }
    int ans = 0;
    for( int k : m){
        ans++;
    }
    cout<<ans<<endl;
}