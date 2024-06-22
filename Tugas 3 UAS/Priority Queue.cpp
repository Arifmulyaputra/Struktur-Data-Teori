#include <iostream>
#include <queue>

using namespace std;

int main() {
    priority_queue<int> antrianPrioritas;
    antrianPrioritas.push(9);
    antrianPrioritas.push(27);
    antrianPrioritas.push(18);

    while (!antrianPrioritas.empty()) {
        cout << antrianPrioritas.top() << " ";
        antrianPrioritas.pop();
    }
    return 0;
}