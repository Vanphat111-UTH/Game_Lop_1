// BieuthucPT.cpp

#include "BieuthucPT.h"
#include "Bieuthuc.h"


using namespace std;

BieuthucPT::BieuthucPT(int level) : Bieuthuc(level), a(level), b(level) {}

ostream& operator<<(ostream& out, BieuthucPT bt) {
    out << "(" << bt.a << ")" << " " << bt.pheptoan << " " << "(" << bt.b << ")\n";
    return out; 
}

bool BieuthucPT::kiemtra(float traloi) {
    return traloi == this->giatri();
}

float BieuthucPT::giatri() {
    if (pheptoan == '+') return a.giatri() + b.giatri();
    else if (pheptoan == '-') return a.giatri() - b.giatri();
    else if (pheptoan == '*') return a.giatri() * b.giatri();
}