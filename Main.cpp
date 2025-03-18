#include <iostream>
#include "Bieuthuc.h"

using namespace std;

int main() {
    float traloi;
    Bieuthuc bt1(4);
    cout << bt1;
    cout << " = ";
    cin >> traloi;
    cout << bt1.kiemtra(traloi);
return 0;
}