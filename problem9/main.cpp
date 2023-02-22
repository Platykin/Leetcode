#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>

bool isPal(int x);

bool inPal(int x){
    std::string regular_int = std::to_string(x);
    std::string reversed_int = regular_int;
    std::reverse(reversed_int.begin(), reversed_int.end());
    if (reversed_int == regular_int)
        return true;
    else
        return false;
}

int main(){
    std::cout << std::boolalpha;
    std::cout << inPal(12321) << std::endl;



    return 0;
}