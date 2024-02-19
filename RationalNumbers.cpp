#include <iostream>
using namespace std;

class Rational
{
private:
int num;
int den;
public:
Rational(int n=0, int d=1)   // Constructor
{
    num = n;
    den = d;
}
Rational add(Rational r)      
{
Rational temp;
temp.num = (num*r.den)+(den*r.num);
temp.den = den*r.den;
return temp;
}

// Friend add function
friend Rational operator+( Rational a, Rational b);

// Insertion operator overloading
friend ostream & operator<<(ostream &o, Rational t);

//display function
void display()
{
    cout<<this->num<<"/"<<this->den;
}

};

// Add function 
Rational operator+( Rational a, Rational b)
{
    Rational r;
    r.num = (a.num*b.den) + (b.num*a.den);
    r.den =  a.den*b.den;
    return r;
}

//Display insertion operator

ostream & operator<<(ostream &o, Rational t)
{
    o<<t.num<<"/"<<t.den;
}

int main()
{
    Rational r1(2,5);
    Rational r2(7,9);
    Rational r3 = r1.add(r2);
    r3.display();

    cout<<endl;

    Rational r4 = r1 + r2;
    r4.display();

    cout<<endl;

    cout<<r4;

}