#include<iostream>
#include<string>
#include<climits>
#include<map>
using namespace std;
int nouniquechar(string s){
    int i=0;
    int j=0;
    int ans=0;
    map<char,int>mp;
    while(j<s.length()){
        mp[s[j]]++;
        if(mp.size()==j-i+1){
            ans=max(ans,j-i+1);
            j++;
        }
        else if(mp.size()<j-i+1){
            while(mp.size()<j-i+1){
                mp[s[i]]--;
                if(mp[s[i]] == 0) {
                    mp.erase(s[i]);
                }
                i++;
            }
            j++;
        }
    }
    return ans;
}
int main()
{
 string s;
 getline(cin,s);
 cout<<nouniquechar(s);
}