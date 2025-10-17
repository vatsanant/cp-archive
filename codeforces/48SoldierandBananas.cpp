#include <iostream>
using namespace std;
int main(){
    int k, n, w;
    cin >> k >> n >> w;
    /*
    *k= cost; n=dolla; w=wants;
    */

   if(w == 0){
    cout << 0;
   }

   else{
   int rm = 0;

   for(int i = 1; i <= w; ++i){
    rm += i * k;

   }

   if(rm < n){
    cout << 0;
   }
   else{
       cout << rm - n;

   }


   }


    

    return 0;
}