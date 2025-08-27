#include<iostream>
#include<vector>
#include<climits>
#include<string>
#include<map>
using namespace std;
int longestsubstring(string s,int k){
    int i=0;
    int j=0;
    map<char,int>mp;
    int ans=INT_MIN;
    while(j<s.length()){
        mp[s[j]]++;
        if(mp.size()<k)j++;
        else if(mp.size()==k){
            ans=max(ans,j-i+1);
            j++;
        }
        else if(mp.size()>k){
            while(mp.size()>k){
                mp[s[i]]--;
                if(mp[s[i]]==0)mp.erase(s[i]);
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
 getline(cin, s);
 int k;
 cin>>k;
 cout<<longestsubstring(s,k);
}
