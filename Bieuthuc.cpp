#include "Bieuthuc.h"
// Bieuthuc.cpp

using namespace std;

char randomPhepToan(int level) {
    if (level == 4) {
        char a;
        return a = (randomNumber() % 2 == 0) ? '+' : '-';
    }
    int temp = randomNumber() % level + 1;
    if (temp == 1) return '+';
    else if (temp == 2) return '-';
    else if (temp == 3) return '*';
    else return randomPhepToan(level - 1);
}

Bieuthuc::Bieuthuc(int level)
{
    switch (level) {
    case 1:
        a = randomNumber() % 11;
        b = randomNumber() % 11;
        pheptoan = randomPhepToan(level);
        break;
    case 2:
        a = randomNumber() % 11;
        b = randomNumber() % 11;
        pheptoan = randomPhepToan(level);
        break;
    case 3:
        a = randomNumber() % 11;
        b = randomNumber() % 11;
        pheptoan = randomPhepToan(level);
        break;
    case 4:
        a = randomNumber() % 101;
        b = randomNumber() % 101;
        pheptoan = randomPhepToan(level);
        break;
    case 5:
        a = randomNumber() % 101;
        b = randomNumber() % 101;
        pheptoan = randomPhepToan(level);
        break;
    default:
        a = randomNumber() % 101;
        b = randomNumber() % 101;
        pheptoan = randomPhepToan(level);
        break;
    }
}

ostream& operator<<(ostream& os, Bieuthuc& bt) {
    os << bt.a << ' ' << bt.pheptoan << ' ' << bt.b;
    return os;
}

bool Bieuthuc::kiemtra(float traLoi) {
    return a = (traLoi == this->giatri()) ? true : false;
}

float Bieuthuc::giatri() {
    if (this->pheptoan == '+') return this->a + this->b;
    else if (this->pheptoan == '-') return this->a - this->b;
    else if (this->pheptoan == '*') return this->a * this->b;
    return 0;
}