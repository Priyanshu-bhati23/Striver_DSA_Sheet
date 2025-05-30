#include <bits/stdc++.h>
using namespace std;



//Method 1 BRUTE --- sort in this case  used bubble sort
//worst case o(nsq)// in case of merge sort o(nlogn)
//best case 0(1);already sorted
int main(){
    int arr[5]={1,2,3,4,5};
    int secondlargest=0;
    for(int i=0;i<5;i++){
      for(int j=i+1;j<5;j++){
        if(arr[j]<arr[i]){
            int temp=arr[i];
            arr[j]=arr[i];
            arr[i]=temp;

        }
      }

      
    }
    for(int i=0;i<5;i++){
        if(arr[i]>secondlargest && secondlargest!=arr[4]){
            secondlargest=arr[i];
            

        }
    }


   



//optimal solution
//time complexity o(n)


// int largest=arr[0];
// for(int i=1;i<5;i++){
//   if (arr[i]>arr[0]) largest =arr[i];
// }








}