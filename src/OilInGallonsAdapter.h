//
// Created by pablo on 16/05/22.
//

#ifndef STRUCTURALADAPTERDP_OILINGALLONSADAPTER_H
#define STRUCTURALADAPTERDP_OILINGALLONSADAPTER_H
#include"IOilInGallons.h"
#include "IOilInLitre.h"
#include "OilInLitres.h"

class OilInGallonsAdapter : public IOilInGallons{
private:
    IOilInLitre *oilInLitre = new OilInLitres();
public:
    double GALLON_X_LITRE = 3.78541;

    Oil buyOilInGallons(double price, double quantityInGallons) override;

    double convertGallonsToLitre(double gallonQuantity);

};


#endif //STRUCTURALADAPTERDP_OILINGALLONSADAPTER_H
