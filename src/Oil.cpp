//
// Created by pablo on 16/05/22.
//

#include "Oil.h"

Oil::Oil(double price, double litres) : price(price), litres(litres) {
    totalPrice = price * litres;
    std::cout << "Total Cost of purchase is " << totalPrice << " dollars. Purchase Complete." << std::endl;
}

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
    std::setprecision(10);
    os << "price: " << oil.price << " dollars litres: " << oil.litres << " totalPrice: " <<std::fixed<< oil.totalPrice<< "dollars";
    return os;
}


double Oil::getTotalPrice() const {
    return totalPrice;
}

void Oil::setTotalPrice(double totalPrice) {
    Oil::totalPrice = totalPrice;
}

std::string Oil::toString() {
    std::stringstream ss;
    ss<< (*this) << std::endl;
    return ss.str();
}

