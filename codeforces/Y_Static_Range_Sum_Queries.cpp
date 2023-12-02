#include<iostream>
#include<vector>

using namespace std;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int a,b,sum=0;cin>>a>>b;
    vector<int> v(0,0);
    for(int i=0;i<a;i++){
        int c;cin>>c;
        sum +=c;
        v.push_back(sum);
    }

    for (int i=0;i<b;i++){
        int m,n;cin>>m>>n;

        if(m==1){
            cout<<v[n-1]<<endl;
        }else{
            cout<< (v[n-1]-v[m-2])<<endl;
        }
    }

}