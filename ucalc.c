// ucalc.c
// determine precision U of the machine's floating point operations

#include<iostream>

int main()
{
  double a = 0.0;
  double b = 0.0; 
  double c = 0.0;
  double u = 0.0;

  a = 4.0 / 3.0;

  b = a - 1;

  c =  b + b + b;

  u = c - 1.0;

  // I didn't want to bother looking up the c++ equivalent to a float abs() function
  // fix u if it is negative

  if( u < 0 ) 
    u *= -1.0;


  cout << " a = " << a << endl
       << " b = " << b << endl
       << " c = " << c << endl
       << " u = " << u << endl;

  return 0;
}


// u = 1.19209e-07 when using float variables

// u = 2.22045e-16 when using double variables

