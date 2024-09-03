#include <vector>

std::vector<int> increaseVectorElements(const std::vector<int>& vec, int n) {
    std::vector<int> result;
    for (int value : vec) {
        result.push_back(value + n);
    }
    return result;
}
