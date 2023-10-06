#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[7] = {2, 5, 1, 8, 2, 9, 1};
    int k = 2;
    int start = 0, end = 0, sum = 0, maxi = 0;
    while(end < 7){
        sum += arr[end];
        if((end-start+1)<k){
            end++;
        }
        else if((end-start+1) == k){
            maxi = max(maxi, sum);
            sum = sum - arr[start];
            start++;
            end++;
        }
    }
    cout<<maxi<<endl;
}