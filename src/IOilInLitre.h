//
// Created by pablo on 16/05/22.
//

#ifndef STRUCTURALADAPTERDP_IOILINLITRE_H
#define STRUCTURALADAPTERDP_IOILINLITRE_H
#include"Oil.h"
/*
 * Interface class
 */
class IOilInLitre {
public:
    virtual Oil buyOil(double price, double quantityInLitres) = 0;

    virtual ~IOilInLitre() = default;

};


#endif //STRUCTURALADAPTERDP_IOILINLITRE_H
