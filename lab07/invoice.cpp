#include "invoice.h"

void Invoice::add(Product product, int qty)
{
    produkti.push_back(Item(product, qty));
}



double Invoice::subtotal()
{
double sum=0;
for (auto item:produkti){
    sum+=item.subtotal();
}
return sum;

}
