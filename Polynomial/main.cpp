/*
Implement a class Quadratic that represents degree two polynomials i.e., polynomials of type
ax2+bx+c. The class will require three data members corresponding to a, b and c. Implement
the following operations:
1. A constructor (including a default constructor which creates the 0 polynomial).
2. Overloaded operator+ to add two polynomials of degree 2.
3. Overloaded << and >> to print and read polynomials. To do this, you will need to
decide what you want your input and output format to look like.
4. A function eval that computes the value of a polynomial for a given value of x.
5. A function that computes the two solutions of the equation ax2
+bx+c=0.
 */




#include <iostream>
using namespace std;

//Define a class for polynomial

class quadratic
{
    public:
    int a,b,c;
    
    public:
    
    quadratic()//Constructor
    {
        a=0;
        b=0;
        c=0;
    }
    
    friend istream  &operator>>(istream &, quadratic &);
    friend ostream  &operator<<(ostream &, quadratic &);
    quadratic operator+(quadratic);
};

istream &operator>>(istream &input,quadratic &q)
{
    cout<<"\nEnter coefficient of x^2:"; 
    input>>q.a;
    cout<<"Enter coefficient of x^1:"; 
    input>>q.b;
    cout<<"Enter coefficient of x^0:"; 
    input>>q.c;
    
    return(input);
}

ostream &operator<<(ostream &output,quadratic &q)
{
    output<<q.a<<"x^2+("<<q.b<<")x^1+("<<q.c<<")x^0=0"<<endl;
    return(output);
}

quadratic quadratic::operator+(quadratic r)
{
    quadratic temp;
    temp.a=a+r.a;
    temp.b=b+r.b;
    temp.c=c+r.c;
    return (temp);
    }
    
int main()
{
    quadratic q1,q2,q3;
    cout<<"Enter values for 1st quadratic equation:";
    cin>>q1;
    cout<<"1st eqaution is:";
    cout<<q1;
    cout<<"***********************************************************************"<<endl;
    cout<<"Enter values for 2nd quadratic equation:";
    cin>>q2;
     cout<<"2nd eqaution is:";
    cout<<q2;
    cout<<"***********************************************************************"<<endl;
    
    q3=q1+q2;
    
    cout<<"\nAddition is:";
    cout<<q3;
    
    cout<<"***********************************************************************"<<endl;
    
    return 0;
    
    
    
}

