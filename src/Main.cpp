//
// Created by pablo on 16/05/22.
//
#include <iostream>
#include "IOilInGallons.h"
#include "OilInGallonsAdapter.h"
#include <iomanip>

int main() {
    int LITRE_PRICE = 3;


    IOilInGallons *oilInGallons = new OilInGallonsAdapter;
    Oil barrel = oilInGallons->buyOilInGallons(LITRE_PRICE, 6);

     std::string barrelToString = barrel.toString();


     std::cout<<barrelToString;

    return 0;
}
