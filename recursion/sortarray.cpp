#include<iostream>
#include<vector>
using namespace std;
void insert(vector<int>&v,int temp){
    if(v.size()==0||v[v.size()-1]<=temp){
        v.push_back(temp);
        return;
    }
    int last=v[v.size()-1];
    v.pop_back();
    insert(v,temp);
    v.push_back(last);
}
void sort(vector<int>&v){
    if(v.size()==1){
        return;
    }
    int last=v[v.size()-1];
    v.pop_back();
    sort(v);
    insert(v,last);
}
int main()
{
 int n;
 cin>>n;
 vector<int>s(n);
 for(int i=0;i<n;i++){
    cin>>s[i];
 }
 sort(s);
 for(int i=0;i<n;i++){
    cout<<s[i]<<" ";
 }
}