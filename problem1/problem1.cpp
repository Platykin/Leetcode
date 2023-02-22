#include <vector>
#include <iostream>
#include <unordered_map>

using namespace std;
/*  BRUTE FORCE ATEMPT. SUCCESFUL
Leetcode stats:
runtime: 1116 ms
memory: 10.3 MB

vector <int> twoSum(vector<int> &nums, int target);

vector<int> twoSum(vector<int>& nums, int target) {
    vector<int>ans;

    for(long unsigned int i=0;i<nums.size();i++){
        int sum=0;
        for(long unsigned int j=0;j<nums.size();j++){
            if(i != j){
                sum=nums[i] +nums[j] ;
                if(sum == target) {
                    ans.push_back(i); // ans.push_back(j); 
                }
            }
        }
    }
    return ans;
}*/


/*Leetcode stats:
Runtime: 12 ms
Memory: 11 MB

*/
    vector <int> twoSum(vector <int> &nums, int target);
    vector <int> twoSum(vector <int> &nums, int target){
        vector <int> ans{};
        unordered_map <int, int> mapinha{};
        for (int i{0}; i < nums.size(); i++){
            int complement = target - nums[i];
            if (mapinha.count(complement) > 0){
                ans.push_back(mapinha[complement]);
                ans.push_back(nums[i]);
                return ans;
            }
            mapinha[nums[i]] = i;
        }
        return ans;
    }

int main(){
    vector <int> nums{};
    int target{0};
    int num_of_values{0};

    cout << "Enter the number of values you want the vector to have: " << endl;
    cin >> num_of_values;

    for (int i{0}; i < num_of_values; i++){
        int num_to_add{0};
        cout << "\nEnter the numbers you want to be in the vector: ";
        cin >> num_to_add;
        nums.push_back(num_to_add);
    }
    cout << "Now enter the target: ";
    cin >> target;

    vector <int> ans{};
    ans = twoSum(nums, target);

    for (size_t i{0}; i < ans.size(); i++){
        if(i == 0)
            cout << "[ ";
        cout << ans.at(i) << " ";
    }
    cout << "]" << endl;


    return 0;
}