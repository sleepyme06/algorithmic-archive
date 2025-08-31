#include<iostream>
#include<string>
using namespace std;
void solve(string ip,string op){
    if(ip.length()==0){
        cout<<op<<" ";
        return;
    }
    for(int i=0;i<ip.length();i++){
        string op1=op+ip[i];
        string ip1=ip;
        ip1.erase(i,1);
        solve(ip1,op1);
    }
}
int main()
{
 string s;
 cin>>s;
 solve(s,"");
}