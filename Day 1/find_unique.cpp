#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[7] = {1, 1, 3, 4, 2, 4, 3};
    int ans = 0;
    for (int i = 0; i < 7; i++)
    {
        ans = ans^arr[i];
    }
    cout<<ans<<endl;
}