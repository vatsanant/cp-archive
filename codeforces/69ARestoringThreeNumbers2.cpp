#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int numbers[5];

    for(int i = 0; i < 4; ++i){
        cin >> numbers[i];
    }

    sort(numbers, numbers + 4);

    cout << numbers[3] - numbers[2] << " " << numbers[3] - numbers[1] << " " << numbers[3] - numbers[0];

    

    return 0;
}