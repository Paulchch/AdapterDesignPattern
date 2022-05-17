//
// Created by pablo on 16/05/22.
//

#ifndef STRUCTURALADAPTERDP_OILINGALLONSADAPTER_H
#define STRUCTURALADAPTERDP_OILINGALLONSADAPTER_H
#include"IOilInGallons.h"
#include "IOilInLitre.h"

class OilInGallonsAdapter : public IOilInGallons{
private:
public:
    Oil buyOilInGallons(double price, double quantityInGallons) override;

private:
    IOilInLitre *iOilInLitre;
public:
};


#endif //STRUCTURALADAPTERDP_OILINGALLONSADAPTER_H
