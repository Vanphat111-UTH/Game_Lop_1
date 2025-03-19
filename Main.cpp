#include <iostream>
#include "Bieuthuc.h"
#include "BieuthucCong.h"
#include "BieuthucTru.h"
#include "BieuthucNhan.h"

using namespace std;

int main() {
    float traloi;
    BieuthucCong bt1(1);
    BieuthucTru bt2(2);
    BieuthucNhan bt3(3);
    cout << bt1;
    cout << " = ";
    cin >> traloi;
    cout << bt1.kiemtra(traloi) << endl;
    cout << bt2;
    cout << " = ";
    cin >> traloi;
    cout << bt2.kiemtra(traloi) << endl;
    cout << bt3;
    cout << " = ";
    cin >> traloi;
    cout << bt3.kiemtra(traloi) << endl;
return 0;
}