#include <iostream>

int main(){

    int a; 
    std::cin >> a;
  
    while (true){
    a += 1;
    int p = a / 1000;
    int q = a / 100 % 10;
    int r = a / 10 % 10;
    int s = a % 10;
    if (p != q && p != r && p != s && q != r && q != s && r != s)
        {
            break;
        }
    }

    std::cout << a << std::endl;
    return 0;
}