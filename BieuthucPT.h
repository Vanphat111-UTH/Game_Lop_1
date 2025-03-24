// BieuthucPT.h

#pragma once
#include "Bieuthuc.h"
#include <iostream>

class BieuthucPT : public Bieuthuc {
    protected:
        Bieuthuc a, b;
    public:
        BieuthucPT(int level); //overide để sinh ngẫu nhiên được dạng biểu thức mới, quy luật sinh như sinh lớp Bieuthuc
        friend std::ostream& operator<<(std::ostream& out, BieuthucPT bt); //overide để xuất dạng biểu thức mới
        bool kiemtra(float traloi); //overide...
        float giatri(); //overide...
};
