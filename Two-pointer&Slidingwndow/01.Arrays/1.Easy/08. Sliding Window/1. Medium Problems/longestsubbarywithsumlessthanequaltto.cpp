//using slider window approach
//expand
// and shrink

#include<bits/stdc++.h>
using namespace std;


int longestsubarraylength(int* arr,int n,int k){
    int sum=0;
    int l=0;
    int r=0;
    int maxlen=0;
    while(r<n){  //->shrinking
        sum=sum+arr[r];
        if(sum>k){
            sum=sum-arr[l];
            l=l+1;
        } 
        if(sum<=k){
            maxlen=max(maxlen,r-l+1);
        }
        r++;
    }
    return maxlen;
}

int main(){

    int arr[5]={2,5,1,10,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target;
    cin>>target;
     cout<<longestsubarraylength(arr,n,target)<< " ";



    return 0;
}



//tc---o(n+n),o(n);
//sc--o(1);