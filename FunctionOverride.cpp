#include <iostream>
using namespace std;

class BasicCar
{
public:
 virtual void display()
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
BasicCar b;
b.display();
AdvanceCar a;
a.display();

BasicCar *p = &a;
p -> display();    //because of virtual finction it will execute the function of AdvanceCar.
}