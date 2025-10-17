#include <iostream>
using namespace std; 

int main(){
	int tc; 
	cin >> tc; 

	while(tc--){
		int l, r, L, R; 
		cin >> l >> r >> L >> R; 

		if(l > L){
			swap(l, L);
			swap(r, R);
		}
		if(r < L){
			cout << 1 << endl;
		}
		else{
		int m = max(l, L);
		int n = min(r, R);

		int mn = n - m + 2;

		if(n == max(r, R)){
			mn--; 
		}
		if(m == min(l, L)){
			mn--;
		}
		cout << mn << endl;
		}
	}


return 0; 
}
