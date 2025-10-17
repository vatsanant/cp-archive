#include <iostream>
using namespace std;
int main(){
    int n, k; 
    cin >> n >> k;

    int time = 240 - k;
    int count = 0; 
    int ctime = 5;

    while(count<n&&time>=ctime){
        time -= ctime;
        count++;
        ctime+=5;
    }

    cout << count << endl;
    return 0;
}