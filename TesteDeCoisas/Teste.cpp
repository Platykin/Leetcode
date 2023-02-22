#include <iostream>
#include <unordered_map>

using namespace std;

int main(){
    unordered_map <string, int> mapinha{};
    mapinha["Igor"] = 10;
    mapinha["Sarah"] = 100;
    for (auto it = mapinha.begin(); it != mapinha.end(); it++){
        cout << it->first << ": " << it->second << endl;
    }




    return 0;
}