#include<iostream>
#include<string>
using namespace std;
void subsetstring(string ip,string op){
    if(ip.length()==0){
        cout<<op<<" ";
        return;
    }
    string op1=op;
    string op2=op;
    op2.push_back(ip[0]);
    ip.erase(ip.begin());
    subsetstring(ip,op1);
    subsetstring(ip,op2);
} 
int main()
{
 string s;
 cin>>s;
 subsetstring(s," ");
}