#include <iostream>
#include <vector>
#include <algorithm>
using namespace std; 

void solve(){
   // another way to check for diff polarity ints
   int n; 
   cin >> n; 
   vector<int> arr(n); 

   bool even = false, odd = false; 
   for(int i = 0; i < n; i++){
      cin >> arr[i];
      if (arr[i] % 2 == 0) even = true;
      else odd = true;
   }


   if(odd && even) sort(arr.begin(), arr.end());
   for(int i = 0; i < arr.size(); i++){
      cout << arr[i] << " \n"[i == n-1]; // this is amazin
      // clever truck to use c-style string indexing trick, [i == n-1] returns boolean value, either 1 or 0, 
      // and then that's used to index from string " \n"
   }
}

int main(){

   int tc; 
   cin >> tc; 
   while(tc--){
      int n ;
      cin >> n; 
      vector<int> arr(n); 
      for(int i = 0; i < n; i++){
         cin >> arr[i];
      }
    
      bool sameParity = true;
      for(int i = 0; i < n - 1; i++){
         // check if all elemts are either odd or even
         if(arr[i] % 2 != arr[i+1] % 2){
            sameParity = false;
            break;
         }
      }

      if(sameParity) {
         for(int i = 0; i < n; i++){
            cout << arr[i] << ' ';
         }
         cout << '\n';
      } else {
         sort(arr.begin(), arr.end());
         for (int i = 0; i < n; i++) {
            cout << arr[i] << ' ';
         }
         cout << '\n';
      }
   }
   return 0;
}