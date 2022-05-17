//
// Created by pablo on 16/05/22.
//

#ifndef STRUCTURALADAPTERDP_OILINLITRES_H
#define STRUCTURALADAPTERDP_OILINLITRES_H
#include "IOilInLitre.h"

class OilInLitres : public IOilInLitre {
public:
    Oil buyOil(double price, double quantityInLitres) override;

    virtual ~OilInLitres();
};


#endif //STRUCTURALADAPTERDP_OILINLITRES_H
