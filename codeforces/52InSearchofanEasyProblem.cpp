#include <iostream>
using namespace std;

int main(){
    int n; cin >> n;
    int arr[n];
    int z = 0; 
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(arr[i] == 1){
             z++;
        }
    }

    if(z!= 0) cout << "HARD" << endl;
    else cout << "EASY" << endl; 
    return 0;
}