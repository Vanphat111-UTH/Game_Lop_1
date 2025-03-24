// BieuthucPS.cpp

#include "BieuthucPS.h"


using namespace std;


BieuthucPS::BieuthucPS(int level) : Bieuthuc(level) {
    a.random(20);
    b.random(20);
}

ostream& operator<<(ostream& out, BieuthucPS bt) {
    out << bt.a << ' ' << bt.pheptoan << ' ' << bt.b << endl;
    return out;
}

bool BieuthucPS::kiemtra(float traloi) {
    return traloi == giatri();
}

float BieuthucPS::giatri() {
    if (pheptoan == '+') return a.equal() + b.equal();
    else if (pheptoan == '-') return a.equal() - b.equal();
    else if (pheptoan == '*') return a.equal() * b.equal();
}