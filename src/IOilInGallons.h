//
// Created by pablo on 16/05/22.
//

#ifndef STRUCTURALADAPTERDP_IOILINGALLONS_H
#define STRUCTURALADAPTERDP_IOILINGALLONS_H
#include "Oil.h"

/*
 * Interface class
 */
class IOilInGallons {
public:
    virtual Oil buyOilInGallons(double price, double quantityInGallons) = 0;

    virtual ~IOilInGallons() = default;

};


#endif //STRUCTURALADAPTERDP_IOILINGALLONS_H
