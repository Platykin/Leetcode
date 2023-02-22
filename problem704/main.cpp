#include <iostream>
#include <vector>

int busca_binaria(std::vector <int> &nums, int target);

int busca_binaria(std::vector <int> &nums, int target){
   
    int esquerda{0}, direita(nums.size() - 1);
    
    while (esquerda <= direita){
        
        int meio = (esquerda + direita)/2;
       
        if (target == nums[meio]) {return meio;}
       
        else if (nums[meio] < target){
            esquerda = meio + 1;
        }
       
        else if (nums[meio] > target){
            direita = meio - 1;
        }
    }
    return -1;
}

int main(){
    std::vector <int> nums{-1, 0, 3, 5, 9, 12};
    int target{9};
    int resp = busca_binaria(nums, target);
    std::cout << resp << std::endl;
    return 0;
}