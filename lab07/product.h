
#include <string>
using std:: string;

class Product {

public:
Product(string ime, double cena);
double getcena();

private:
string ime;
double cena;
};