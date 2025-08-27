#include<iostream>
#include<vector>
using namespace std;
int maxsum(vector<int>v,int n,int sw){
    int i=0;
    int j=0 ;
    int sum=0;
    int maxsum=0;
    while(j<n){
        sum=sum+v[j];
        if(j-i+1<sw) j++;
        else if(j-i+1==sw){
            maxsum=max(maxsum,sum);
            sum=sum-v[i];
            i++;
            j++;
        }
    }
    return maxsum;
}
int main()
{
 int n;
 cin>>n;
 vector<int>v(n);
 for(int i=0;i<n;i++){
    cin>>v[i];
 }
 int ws;
 cin>>ws;
 cout<<maxsum(v,n,ws);

}