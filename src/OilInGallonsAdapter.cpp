//
// Created by pablo on 16/05/22.
//

#include "OilInGallonsAdapter.h"

Oil OilInGallonsAdapter::buyOilInGallons(double price, double quantityInGallons) {
    double quantityInLitre = convertGallonsToLitre(quantityInGallons);
    return oilInLitre->buyOil(price, quantityInLitre);
}

double OilInGallonsAdapter::convertGallonsToLitre(double gallonQuantity) {
    return gallonQuantity * GALLON_X_LITRE;
}
