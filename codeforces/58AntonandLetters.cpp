//fuck the fast way, do it as you can. then we'll se  {done this way}

//What would be the efficient way if ? 
// using hashmap

/*
//so now we can directly check if the character is a small alphabet or not.
//there is no need to convert ascii into integers and check range.

stratgey:
a. extract chars only from string.
b. put it into a vector. 
c. remove duplicates from vector.
d. print size/data_type of vector.
*/
// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
int main(){
    std::string s;
    std::getline(std::cin, s);
    std::vector<char> a;

    //a & b here. 
    for(int i = 0; i < s.length(); i++){
        if(s[i] >= 'a' && s[i] <= 'z'){
            a.push_back(s[i]);   
        }
    }

    
    std::sort(a.begin(), a.end());

    a.erase(std::unique(a.begin(), a.end()), a.end());

    std::cout << a.size()<< std::endl; 
    return 0;
}

