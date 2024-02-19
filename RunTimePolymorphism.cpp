#include <iostream>
using namespace std;

class Car
{
public:
 virtual void start()=0;      // Pure virtual Function
// {
//     cout<<"Car Started."<<endl;
// }
};

// Gernalization
class Innova : public Car
{
public: 
void start()
{
    cout<<"Innova started."<<endl;
}

};
class Swift : public Car
{
public: 
void start()
{
    cout<<"Swift started."<<endl;
}

};

int main()
{
    Car *c = new Innova();
    c -> start();    // Innova started
    c = new Swift();
    c -> start(); // Swift started
}