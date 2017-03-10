//
// Created by Administrator on 2017/3/9.
//

#include "math_lib.h"

JniMath::JniMath() {

}

JniMath::~JniMath() {

}

int JniMath::getValue(int key) {
    if (key == 0) {
        return 11;
    } else {
        return 22;
    }
}