#include <iostream>
using namespace std;
int main(){
int n; cin >> n;
int arr[n];
for(int i = 0; i < n; i++){
cin >> arr[i];}


int max_height = arr[0];
int max_index = 0;
int min_height = arr[0]; 
int min_index = 0;



for(int i = 0; i < n; i++){
if(arr[i] > max_height){
max_height = arr[i];
max_index = i;}
if(arr[i] <= min_height){
min_height = arr[i];
min_index = i;}
}

  


if(max_index > min_index){cout<<max_index+(n-1)-min_index-1<<'\n';
}
else{cout<<max_index+(n-1)-min_index<<'\n';
}
  
  
return 0;
}