#include<iostream>
#include<vector>
#include<climits>
using namespace std;
void maxofsubarray(vector<int>v,int n,int ws){
    int i=0;
    int j=0;
    int maxnum=INT_MIN;
    while(j<n){
        maxnum=max(maxnum,v[j]);
        if(j-i+1<ws)j++;
        else if(j-i+1==ws){
            cout<<maxnum<<" ";
            if(maxnum==v[i]){
                
                for(int k=i+1;k<=j;k++){
                    int mn=INT_MIN;
                    maxnum=max(mn,v[k]);
                }
            }
            i++;
            j++;
            
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
 maxofsubarray(v,n,sw);
}