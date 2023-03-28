#include <iostream>
#include "invoice.h"
using namespace std;

int main(){

    Product apple("Apple", 2.90);
    Product banana("Banana", 1.65);


    Invoice invoice;
    invoice.add(apple, 2);
    invoice.add(banana, 3);
    return 0;
}