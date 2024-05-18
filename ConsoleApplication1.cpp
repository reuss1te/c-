#include <vector>
#include <iostream>


std::vector<int> increaseVectorElementsByN(const std::vector<int>& vec, int n) {
    std::vector<int> result;

    for (int num : vec) {
        result.push_back(num + n);
    }

    return result;
}

int main() {
    std::vector<int> numbers = { 1, 2, 3, 4 };
    std::vector<int> increasedNumbers = increaseVectorElementsByN(numbers, 5);
    for (int num : increasedNumbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
