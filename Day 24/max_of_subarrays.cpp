#include<bits/stdc++.h>
using namespace std;

void maxofsubarrays(vector<int> &vec, int k){
    int i = 0, j = 0, maxi = 0;
    queue<int> q;
    while(j < vec.size()){
        maxi = max(maxi, vec[j]);
        if(q.empty() || q.back() != maxi){
            q.push(maxi);
        }
        if((j-i+1) == k){
            cout<<maxi<<" ";
            if(!q.empty() && vec[i] == q.front()){
                q.pop();
            }
            i++;
        }
        j++;
    }
}

int main(){
    vector<int> arr;
    arr.push_back(2);
    arr.push_back(5);
    arr.push_back(1);
    arr.push_back(8);
    arr.push_back(2);
    arr.push_back(9);
    arr.push_back(1);
    int n = 7;
    int k = 3;
    maxofsubarrays(arr, k);
    return 0;
}
