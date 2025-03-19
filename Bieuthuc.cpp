#include "Bieuthuc.h"
// Bieuthuc.cpp

using namespace std;

char randomPhepToan(int level) {
    srand(time(NULL));
    if (level == 4) {
        char a;
        return a = (rand() % 2 == 0) ? '+' : '-';
    }
    int temp = rand() % level + 1;
    if (temp == 1) return '+';
    else if (temp == 2) return '-';
    else if (temp == 3) return '*';
    else return randomPhepToan(level - 1);

}

Bieuthuc::Bieuthuc(int level)
{
    srand(time(NULL));
    switch (level) {
    case 1:
        a = rand() % 11;
        b = rand() % 11;
        pheptoan = randomPhepToan(level);
        break;
    case 2:
        a = rand() % 11;
        b = rand() % 11;
        pheptoan = randomPhepToan(level);
        break;
    case 3:
        a = rand() % 11;
        b = rand() % 11;
        pheptoan = randomPhepToan(level);
        break;
    case 4:
        a = rand() % 101;
        b = rand() % 101;
        pheptoan = randomPhepToan(level);
        break;
    case 5:
        a = rand() % 101;
        b = rand() % 101;
        pheptoan = randomPhepToan(level);
        break;
    default:
        a = rand() % 101;
        b = rand() % 101;
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