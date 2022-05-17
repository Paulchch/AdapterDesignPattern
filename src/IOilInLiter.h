//
// Created by pablo on 16/05/22.
//

#ifndef STRUCTURALADAPTERDP_IOILINLITER_H
#define STRUCTURALADAPTERDP_IOILINLITER_H
#include"Oil.h"
/*
 * Interface class
 */
class IOilInLiter {
public:
    virtual Oil buyOil(double price, double quantityInLitres) = 0;

    virtual ~IOilInLiter() = default;

};


#endif //STRUCTURALADAPTERDP_IOILINLITER_H
