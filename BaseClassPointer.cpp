// *Base class Pointer and Derived class object*
#include <iostream>
using namespace std;

class BasicCar
{
public:
void show()
{
    cout<<"It is a general or basic car."<<endl;
}
};
class AdvanceCar : public BasicCar
{
public: 
void display()
{
    cout<<"It is an advanced car."<<endl;
}

};

int main()
{
    AdvanceCar a;
    a.display();
    a.show();
    BasicCar *b = &a;
    b -> show();
  //  b -> display();     // error because we are pointer the pointer to advanced car calling it a basic car and 
                          //basic car doesn't have features like advanced car.
}