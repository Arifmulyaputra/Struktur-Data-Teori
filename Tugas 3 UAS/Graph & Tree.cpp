#include <iostream>
#include <vector>

using namespace std;

struct Node {
    int data;
    vector<Node*> anak;
};

Node* buatNodeBaru(int data) {
    Node* nodeBaru = new Node;
    nodeBaru->data = data;
    return nodeBaru;
}

int main() {
    Node* akar = buatNodeBaru(1);
    akar->anak.push_back(buatNodeBaru(2));
    akar->anak.push_back(buatNodeBaru(3));

    cout << "Akar: " << akar->data << endl;
    for (auto& anak : akar->anak) {
        cout << "Anak: " << anak->data << endl;
    }
    return 0;
}