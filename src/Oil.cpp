//
// Created by pablo on 16/05/22.
//

#include "Oil.h"

Oil::Oil(double price, double litres) : price(price), litres(litres) {}

Oil::~Oil() {

}

double Oil::getPrice() const {
    return price;
}

void Oil::setPrice(double price) {
    Oil::price = price;
}

double Oil::getLitres() const {
    return litres;
}

void Oil::setLitres(double litres) {
    Oil::litres = litres;
}

std::ostream &operator<<(std::ostream &os, const Oil &oil) {
    os << "price: " << oil.price << " litres: " << oil.litres;
    return os;
}
