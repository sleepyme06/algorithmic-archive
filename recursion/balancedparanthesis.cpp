#include<iostream>
#include<string>
#include<vector>
using namespace std;
void solve(int open,int close,string op,vector<string>&ans){
    if(open==0&&close==0){
        ans.push_back(op);
        return;
    }
    if(open!=0){
        string op1=op;
        op1.push_back('(');
        solve(open-1,close,op1,ans);
    }
    if(close>open){
        string op2=op;
        op2.push_back(')');
        solve(open,close-1,op2,ans);
    }
}
int main()
{
 int n;
 cin>>n;
 vector<string>v;
 int close=n;
 int open=n;
 string op=" ";
 solve(open,close,op,v);
 for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
 }
}