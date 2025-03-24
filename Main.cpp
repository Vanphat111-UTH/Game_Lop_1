#include <iostream>
#include "Game.h"

using namespace std;

int main() {
    Game g1;
    g1.setScore2UpLevel();
    g1.setWrongAns2Lose();
    g1.start();
return 0;
}