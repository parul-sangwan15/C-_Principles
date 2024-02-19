#include <iostream>
using namespace std;

class Complex
{
private:
int real;
int img;
public:
Complex(int r=0, int i=0)
{
    real = r;
    img = i;
}
Complex add(Complex x)
// Complex operator+(Complex x)  // used "operator+" instead of function name "add"
{
    Complex temp;
    temp.real = real + x.real;
    temp.img = img + x.img;
    return temp;

}
 void display()

        {

            cout<<this->real<<"+"<<this->img<<"i";;

        }

        // Frient Operator Overlaoding
        friend Complex operator+(Complex a, Complex b);

        // Intertion operator overloading 
        friend ostream & operator<<(ostream &o,  Complex c);
        
};

Complex operator+(Complex a, Complex b)      // finction defined after class ends because of its complexity 
{                                      // it remains inline without the use of scope resolution because of being a 'friend' function
            Complex t;
            t.real = a.real + b.real;
            t.img = a.img + b.img;
            return t;
        }

// Inertion operator overloading function defined here 
ostream & operator<<( ostream &o,Complex c)
{
    o<<c.real<<"+ i"<<c.img;
    return o;
}       



int main()

{

    Complex c1(5,7),c2(4,8);

    Complex C3 = c1.add(c2);        // 'add' function is used here
    // Complex C3 = c1 + c2;
    Complex C4 = c1 + c2;           // friend operator overloading is used
    C3.display();
    cout<<endl;
    C4.display();
    cout<<endl;

    // insertion operator overloading calling
    cout<<C4;

}
