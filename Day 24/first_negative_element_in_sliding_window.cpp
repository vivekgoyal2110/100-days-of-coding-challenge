#include<bits/stdc++.h>
using namespace std;

void negetive(vector<int> &vec, int k) {
    int i = 0;
    int j = 0;
    queue<int> q;
    while(j < vec.size()) {
        if(vec[j] < 0) q.push(vec[j]);
        if(j - i + 1 == k) {
            if(q.empty()) {
                cout<<0<<" ";
                i++;
            }
            else {
                cout<<q.front()<<" ";
                if(vec[i] == q.front()) q.pop();
                i++;
            }
        }
        j++;
    }
}

int main(){
    vector<int> arr;
    arr.push_back(12);
    arr.push_back(-1);
    arr.push_back(-7);
    arr.push_back(8);
    arr.push_back(-15);
    arr.push_back(30);
    arr.push_back(16);
    arr.push_back(28);
    int k = 3;
    negetive(arr, k);
    
}