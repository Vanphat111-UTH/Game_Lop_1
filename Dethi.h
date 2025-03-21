// Dethi.h

#pragma once

#include <iostream>
#include <vector>
#include "Bieuthuc.h"
#include "BieuthucCong.h"
#include "BieuthucTru.h"
#include "BieuthucNhan.h"


class Dethi {
    private:
    std::vector<Bieuthuc> ds; //Chứa danh sách các câu hỏi là các biểu thức
    
public:

    Dethi(int n1, int n2, int n3, int level=1); //Sinh danh sách gồm n1 biểu thức chỉ gồm phép cộng, 
                                                // n2 biểu thức chỉ gồm phép trừ, và
                                                // n3 biểu thức chỉ gồm phép nhân.
    std::vector<Bieuthuc> danhsach() { return ds; }
    void xuat(std::ostream& output=std::cout); // xuất danh sách các câu hỏi ra màn hình, các câu hỏi có dạng a # b = ?
    int danhgia(std::istream& input=std::cin); //đọc n1+n2+n3 câu trả lời từ istream (có thể từ cin hoặc file), trả về số câu đúng.                                                                                                                                                            
};
