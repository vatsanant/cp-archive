#include <iostream>
#include <cmath>
using namespace std;

int FindArea(int a, int b){

    if(a == b){
        int result =  pow(2*a, 2);
        return result;
    }

    else if(2 * min(a, b) > max(a, b)){
        int result = pow(2 * min(a, b), 2);
        return result;
    }
    else{
        int result = pow(max(a, b), 2);
        return result;
    }
   
}

int main(){
    int t; cin >> t;
    while(t--){
        int x, y;
        cin >> x >> y;
        cout << FindArea(x, y) << endl;
        

    }

    return 0;
}