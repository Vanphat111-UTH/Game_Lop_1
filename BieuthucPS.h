// BieuthucPS.h

#include <iostream>
#include "Bieuthuc.h"
#include "Fraction.h"

class BieuthucPS : public Bieuthuc
{
protected:
    Fraction a, b;
public:
    BieuthucPS(int level);
    friend std::ostream& operator<<(std::ostream& out, BieuthucPS bt);
    bool kiemtra(float traloi);
    float giatri();
};