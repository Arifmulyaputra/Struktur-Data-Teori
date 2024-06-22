#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    unordered_map<string, int> tabelHash;
    tabelHash["alpha"] = 1;
    tabelHash["beta"] = 2;

    for (auto& pasangan : tabelHash) {
        cout << pasangan.first << ": " << pasangan.second << endl;
    }
    return 0;
}