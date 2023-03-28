#include "product.h"

Product::Product(string ime,double cena){

this-> ime=ime;
if (cena<0){
cena=0;
this->cena=cena;
}
}

double Product::getcena() {
    return cena;
}
