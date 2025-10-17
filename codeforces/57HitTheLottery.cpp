#include <iostream>
using namespace std;

int main(){
    int n; cin >> n;
    int notes = 0;
    int arr[5] = {100, 20, 10, 5, 1};
    for(int i = 0; i < 5; i++){
        notes = notes + (n/arr[i]);
        n = n%arr[i];
    }

    cout << notes << endl;

    return 0;
}


