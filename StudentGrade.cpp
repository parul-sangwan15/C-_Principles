#include <iostream>
#include <string>
using namespace std;

class student
{
private:
int RollNo;
string Name;
int marksPhysics;
int marksChemistry;
int marksMaths;
public:
// student(int r, string n, int p, int c, int m)
// {
// setRollno(r);
// getName(n);
// setMarks(p, c, m);
// // setMarks(c);
// // setMarks(m);
// }
int setRollno(int r)
{
    if(r>0)
    {
        RollNo = r;
    }
    else
    {
        cout<<"Student ID does not exist."<<endl;
    }
}
string setName(string n)
{
 Name = n;
} 

string getName(string n)
{
 return Name;
} 
int setMarks(int p, int c, int m)
{
 marksPhysics = p;
 marksChemistry = c;
 marksMaths = m;
}
int Total()
{
    return marksChemistry+marksMaths+marksPhysics;
}
char Grade()
{
    int Percentage = Total()/3;
    if( Percentage>60)
    {
        return 'A';

    }
    else if (Percentage>=40 && Percentage<60)
    {
        return 'B';
    }
    else {
        return 'C';
    }
}

};
int main(){
    student s1;
    s1.setRollno(3);
    s1.setName("Parul");
    s1.setMarks(60, 80, 75);
cout<<"Total Marks are: "<<s1.Total()<<endl;
cout<<"Grade is: "<<s1.Grade();
}