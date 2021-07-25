#include<bits/stdc++.h>
using namespace std;

long long countTriplets(long long arr[], int n, long long sum){
    //variable to store the count
    int ans=0;

    //sort array to make in ascending order
    sort(arr,arr+n);

    //iterating til less than n-2 
    for(int i=0;i<n-2;i++){
        int j=i+1;
        int k=n-1;
        // while loop to check for triplet 
        while(j<k){
            if(arr[i]+arr[j]+arr[k]>=sum){
                k--;
            }
            else{
                ans+=(k-j);
                j++;
            }
            
        }
    }
    return ans;
}