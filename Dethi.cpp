// Dethi.cpp

#include "Dethi.h"

Dethi::Dethi(int n1, int n2, int n3, int level) {
    Bieuthuc* ptr;
    for (int a = 0; a < n1; a++) {
        ptr = new BieuthucCong(level);
        ds.push_back(*ptr);
        delete ptr;
    }
    for (int b = 0; b < n2; b++) {
        ptr = new BieuthucTru(level);
        ds.push_back(*ptr);
        delete ptr;
    }
    for (int c = 0; c < n3; c++) {
        ptr = new BieuthucNhan(level);
        ds.push_back(*ptr);
        delete ptr;
    }
}

void Dethi::xuat(std::ostream& output) {
    for (int i = 0; i < ds.size(); i++) {
        output << ds[i] << " = ?" << std::endl;
    }
}

int Dethi::danhgia(std::istream& input) {
    int temp, flag = 0;
    for (int i = 0; i < ds.size(); i++) {
        input >> temp;
        if (ds[i].kiemtra(temp)) {
            flag++;
        }
    }
    return flag;
}


