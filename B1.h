//
// Created by Tetiana Perederii on 14.10.2026.
//

#ifndef P53_T28_B1_H
#define P53_T28_B1_H
#include <iosteam>
using namespace std;

class B1 {
    int b1;
public:
    B1(int x) {
        b1 = x;
    }
    void show_B()const {
        cout << "B1 : " << b1 << endl;
    }
};
#endif //P53_T28_B1_H
