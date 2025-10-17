#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int arr[n]; 
    int ts = 0;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        ts += arr[i];
    }

    sort(arr, arr + n);
    int ls = 0, count = 0;        

    for(int i = n - 1; i >= 0 ; i--){
        if(ls <= (ts/2)){
            ls+= arr[i];
            count++;
        }
    }

    cout << count << endl;
    return 0;
}