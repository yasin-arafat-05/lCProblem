#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string output = "";
        sort(strs.begin(),strs.end());
        int k =strs.size();
        string first = strs[0],last = strs[k-1];
        for(int i=0;i<first.size();i++){
            if(first[i]!=last[i]){
                return output;
            }
            output+=first[i];
        }
        return output;
    }
};
int main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    vector<string> f = {"flower","flow","flight"};
    vector<string> s = {"dog","racecar","car"};
    Solution sc;
    string k = sc.longestCommonPrefix(f);
    cout<<k<<endl;
    cout<<endl;
    string l = sc.longestCommonPrefix(s);
    cout<<l<<endl;
}