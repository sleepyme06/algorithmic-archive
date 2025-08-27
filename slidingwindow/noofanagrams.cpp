#include<iostream>
#include<map>
#include<string>
using namespace std;
int numofanagrams(string s,string p){
    map<char,int>mp;
    for(char c:p){
        mp[c]++;
    }
    int i=0;
    int j=0;
    int ans=0;
    int count=mp.size();
    int k=p.size();
    while(j<s.size()){
        if (mp.find(s[j]) != mp.end()) {
            mp[s[j]]--;
            if (mp[s[j]] == 0) count--;
        }
        if(j-i+1<k) j++;
        else if(j-i+1==k){
            if(count==0)ans++;
            if (mp.find(s[i]) != mp.end()) {
                mp[s[i]]++;
                if (mp[s[i]] == 1) count++;
            }
            i++;
            j++;
        }
    }
    return ans;
}
int main()
{
 string s;
 string ptr;
 cin>>s>>ptr;
 cout<<numofanagrams(s,ptr);
}