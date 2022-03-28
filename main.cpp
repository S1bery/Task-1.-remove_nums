#include <iostream>
#include <vector>

std::vector<int> remove (std::vector<int> vec, int num) {
    std::vector<int> newVec(vec.size());

    int newPlace = 0;
    int count = 0;
    for (int i = 0; i < vec.size(); i++) {
        if (num != vec[i]) {
            newVec[newPlace] = vec[i];
            newPlace++;
        } else if (num == vec[i]) {
            count++;
        }
    }
    newVec.resize(newVec.size() - count);

    return newVec;
}

int main() {
    int n;
    int num;
    std::vector<int> vec;

    std::cout << "Enter the sum of numbers: " << std::endl;
    std::cin >> n;

    std::cout << "Enter the numbers: " << std::endl;
    for (int i = 0; i < n; i++) {
        std::cin >> num;
        vec.push_back(num);
    }

    int remNum;
    std::cout << "Enter the number for remove from vector: " << std::endl;
    std::cin >> remNum;

    vec = remove(vec, remNum);

    for (int i = 0; i < vec.size(); i++) {
        std::cout << vec[i] << " ";
    }

    return 0;
}
