#include<iostream>
#include<cmath> 
using namespace std;
class Polar

{ //public accessory functions
public:
Polar():r(0.0),t(0.0){}
Polar( double f, double g):r(f),t(g){} 
~Polar(){} 
friend void DisplayPolar(Polar v);
// to display in polar forms
friend Polar Multiply(Polar v1,
Polar v2);
private:
double r; 
double t;
};
void DisplayPolar(Polar v) 
{ 
cout<<"Magnitude"<<v.r<<"Angle="<<v.t<<endl;
}
Polar Multiply(Polar v1, Polar v2)
{ Polar v3;
v3.r = v1.r * v2.r; 
v3.t = v1.t+v2.t;
return v3;
}
void main()
{Polar v1(5.0,53.0),v2(6.0,28.0),v3; 
v3=Multiply(v1,v2);
cout<<"\nThe Given Vectors in Polar form form ....\n"<<endl;
cout<<"\nPolar form vector v1 :"; DisplayPolar(v1);
cout<<"\nPolar form vector 2 v2 :"; DisplayPolar(v2);
cout<<"\nv3=v1*v2 in Polar Form :";
DisplayPolar(v3);
}//