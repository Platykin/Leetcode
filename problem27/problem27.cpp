#include <iostream>
#include <vector>
#include <chrono>
#include <random>

int removeElement(std::vector<int>& nums, int val) {
    for(int i = 0; i < nums.size(); i++){
        if(i+1 != nums.size() && nums[i] == val && nums[i] == nums[i+1]){
            nums.erase(nums.begin()+i);
            nums.erase(nums.begin()+i);
        }
        if (nums[i] == val){
            nums.erase(nums.begin()+i);
        }
    }
    return nums.size();    
}

int removeElementElegant(std::vector<int>& nums, int val){
    int index = 0;
    for(int i = 0; i < nums.size(); i++){
        if(nums[i] != val){
            nums[index] = nums[i];
            index++;
        }
    }
    return index;
}

int main(){
    std::vector<int> numsTest = {};

    std::random_device rd;
    std::mt19937 gen(rd());

    int min = 0;
    int max = 100;

    std::uniform_int_distribution<> distribution(min, max);
    int val = distribution(gen);
    for(int i = 0; i < 10000000; i++){
        int randNum = distribution(gen);
        numsTest.push_back(randNum);
    }

    // for(int i = 0; i < numsTest.size(); i++){
    //     std::cout << "rand number = " << numsTest[i] << std::endl;
    // }

    //My first approach to the function
    auto startRemoveElement = std::chrono::high_resolution_clock::now();
    removeElement(numsTest, val);
    auto endRemoveElement = std::chrono::high_resolution_clock::now();

    auto durationRemoveElement =  std::chrono::duration_cast<std::chrono::microseconds>(endRemoveElement - startRemoveElement).count();

    std::cout << "Duration of the RemoveElement function in microseconds: " << durationRemoveElement << std::endl;;

    //More elegant approach that I didn't think of
    auto startRemoveElementElegant = std::chrono::high_resolution_clock::now();
    removeElementElegant(numsTest, val);
    auto endRemoveElementElegant = std::chrono::high_resolution_clock::now();

    auto durationRemoveElementElegant =  std::chrono::duration_cast<std::chrono::microseconds>(endRemoveElementElegant - startRemoveElementElegant).count();

    std::cout << "Duration of the RemoveElementElegant function in microseconds: " << durationRemoveElementElegant << std::endl;

    auto faster = static_cast<double>(durationRemoveElement) / durationRemoveElementElegant;

    std::cout << "The more elegant approach is " << faster << "x faster than mine" << std::endl;  

    return 0;
}