#include<iostream>
#include<vector>
using namespace std;
void negnum(vector<int>v,int n,int ws){
    int i=0;
    int j=0;
    vector<int>a;
    while(j<n){
        if (v[j]<0) a.push_back(v[j]);
        if(j-i+1<ws)j++;
        else if(j-i+1==ws){
            if(a.size()==0){
                cout<<" 0";
            }
            else{
                cout<<" "<<a.front();
                if (v[i]==a.front())a.erase(a.begin());
            }
            i++;j++;
        }
    }
}
int main()
{
 int n;
 cin>>n;
 vector<int>v(n);
 for(int i=0;i<n;i++){
    cin>>v[i];
 }
 int sw;
 cin>>sw;
 negnum(v,n,sw);
}