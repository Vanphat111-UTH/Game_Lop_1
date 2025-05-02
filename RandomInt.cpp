// Random.cpp

#include "RandomInt.h"

using namespace std;

int randomInt(int max) {
    std::mt19937 rng(std::random_device{}());
    static vector<int> number;
    for(int i = 0; i < max; i++) {
        number.push_back(i);
    }
    shuffle(number.begin(), number.end(), rng);
    srand(time(NULL));
    return number[rand() % max];
}