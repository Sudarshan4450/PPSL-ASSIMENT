#include <iostream>
#include <string>
using namespace std;
class car
{
public:
// Properties (data members)
string brand;
string model;
int year;
};
int main() {
// Create an object of the Car
car carObj1;
carObj1.brand ="MAHENDRA" ;
carObj1.model ="THAR";
carObj1.year = 2010;
// Create another object of the Car
car carObj2;
carObj2.brand ="TOYTA";
carObj2.model ="CRYSTA";
carObj2.year = 2016;
// Print attribute values
cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
return 0;
}
