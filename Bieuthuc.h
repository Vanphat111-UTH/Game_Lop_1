// Bieuthuc.h

#pragma once

#include <iostream>
#include <cstdlib>

class Bieuthuc
{
protected:
    int a, b; // hai toán hạng
    char pheptoan; // ký tự đại diện phép toán {+, -, *}
public:
    Bieuthuc(int level); // sinh ngẫu nhiên biểu thức theo quy luật
    friend std::ostream& operator<<(std::ostream& os, Bieuthuc& bt); // xuất ra theo dạng a # b
    bool kiemtra(float traLoi); //nhận câu trả lời và kiểm tra xem giá trị biểu thức có trùng câu trả lời không
    float giatri(); //tính giá trị biểu thức
};
