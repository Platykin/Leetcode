#include <iostream>
#include <vector>

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

int main(){
    std::vector<int> nums = {3, 3};
    for(int i = 0; i<nums.size(); i++){
        std::cout << nums[i];
    }

    std::cout << "\n\n\n";

    removeElement(nums, 2);

    for(int i = 0; i<nums.size(); i++){
        std::cout << nums[i];
    }


    return 0;
}