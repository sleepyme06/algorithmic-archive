#include<iostream>
#include<string>
#include<map>
#include<climits>
using namespace std;
int picktoys(string s){
    int i=0;
    int j=0;
    int ans=0;
    map<char,int>mp;
    while(j<s.length()){
        mp[s[j]]++;
        if(mp.size()<2)j++;
        else if(mp.size()==2){
            ans=max(ans,j-i+1);
            j++;
        }
        else if(mp.size()>2){
            while(mp.size()>2){
                mp[s[i]]--;
                if(mp[s[i]]==0){
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
 cout<<picktoys(s);
}