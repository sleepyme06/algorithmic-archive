#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int largestsubarray(vector<int>v,int k,int n){
    int i=0;
    int j=0;
    int sum=0;
    int ans=INT_MIN;
    while(j<n){
        sum+=v[j];
        if(sum<k)j++;
        else if(sum==k){
            ans=max(ans,j-i+1);
            j++;
        }
        else if(sum>k){
            while(sum>k){
                sum-=v[i];
                i++;
            }j++;
        }
    }
    return ans;
}

int main()
{
 int n;
 cin>>n;
 vector<int>v(n);
 for(int i=0;i<n;i++){
    cin>>v[i];
 }
 int sum;
 cin>>sum;
 cout<<largestsubarray(v,sum,n);
}