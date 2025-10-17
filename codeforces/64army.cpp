#include <iostream>
using namespace std;
int main(){
    int max_rank;
    cin >> max_rank;
    int arr[max_rank - 1];
    for(int i = 0; i < max_rank - 1; i++){
        cin >> arr[i];
    }
    int a, b;
    cin >> a >> b;
    int count = 0;
    for(int i = (a-1); i <= (b-2); i++){
        count = count + arr[i];
    }

    cout << count << endl;
    

    return 0;
}