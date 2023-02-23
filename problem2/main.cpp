//I think, solving is the easy part. For the inputs "l1 = [2, 4, 3], l2 = [5, 6, 4]" we could simply multiply each element by a power of 10, for exemplo: l1 = [2, 4, 3] -> l1[i] * 10**i + l1[i] * 10**i + l1[i] * 10**i for each for loop

#include <vector>
#include <cmath>
#include <iostream>

int main(){
    std::vector<int> l1{2, 4, 3};
    int sum1{0};

    for (int i{0}; i < l1.size(); i++){
        sum1 += l1[i] * pow(10, i); 
    }

    std::cout << sum1 << std::endl;


}