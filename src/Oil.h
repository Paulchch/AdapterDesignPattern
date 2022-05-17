//
// Created by pablo on 16/05/22.
//

#ifndef STRUCTURALADAPTERDP_OIL_H
#define STRUCTURALADAPTERDP_OIL_H
#include<iostream>
#include<string>
#include <ostream>
#include<sstream>
#include <iomanip>


/*
 * Object Oil, it represents an Oil Barrel
 */
class Oil {

private:
    double price;
    double litres;
    double totalPrice;
public:
    double getTotalPrice() const;

    void setTotalPrice(double totalPrice);


    double getPrice() const;

    void setPrice(double price);

    double getLitres() const;

    void setLitres(double litres);

    Oil(double price, double litres);

    virtual ~Oil();

    friend std::ostream &operator<<(std::ostream &os, const Oil &oil);

    std::string toString();

};


#endif //STRUCTURALADAPTERDP_OIL_H
