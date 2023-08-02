#include <iostream>
#include <map>
#include <string>

int romanToInt(std::string s) {
    std::map<char, int> valueRomanSymbol =
    {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    };
    int returnedInteger = 0;
    for (auto i = s.begin(); i != s.end(); i++) {
        int value = valueRomanSymbol[*i];
        if (i + 1 != s.end() && valueRomanSymbol[*(i + 1)] > value) {
            returnedInteger -= value;
        }
        else {
            returnedInteger += value;
        }
    }
    return returnedInteger;
}


int main() {
    std::string userInput = "IV";
    std::getline(std::cin, userInput);
    std::cout << romanToInt(userInput) << std::endl;
    return 0;
}