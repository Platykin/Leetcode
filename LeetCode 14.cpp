#include <iostream>
#include <vector>
#include <string>


std::string longestCommonPrefix(std::vector<std::string>& strs) {
	std::string longestPrefix = strs[0];
	int checker = 0;
	for (int i = 0; i < strs.size(); i++){
		int currentStringSize = strs[i].size();
		for (int j = 0; j < currentStringSize; j++){
			if (i + 1 != strs.size() && strs[i][j] == strs[i+1][j]){
				++checker;
			}
			else{
				return longestPrefix.substr(0, checker);
			}
		}
	}
	return longestPrefix.substr(0, checker);
}

int main(){
	std::vector<std::string> strs = {"flower","flow","flight"};
	std::cout << longestCommonPrefix(strs) << std::endl;
	

	return 0;
}