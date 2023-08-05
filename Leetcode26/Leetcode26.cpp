#include <iostream>
#include <vector>

int removeDuplicates(std::vector<int>& nums) {
    int k = 0;
    for(int i = 0; i < nums.size(); i++){
        if (i + 1 != nums.size() && nums[i] == nums[i + 1]){
            nums.erase(nums.begin()+i+1);
            k++;
        }
    }
    return k;
}


int main()
{
    std::vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
    std::cout << removeDuplicates(nums);
    return 0;
}
