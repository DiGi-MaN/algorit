#pragma once
#ifndef HEADER_H
#define HEADER_H
#include <cstdlib>
#include <ctime>
class complex1 {
public: double Re, Im;
	  complex1(double a = 0, double b = 0) : Re(a), Im(b) {};
	  complex1 operator+(complex1 c) {
		  complex1 d;
		  d.Re = Re + c.Re;
		  d.Im = Im + c.Im;
		  return d;
	  };
	  complex1 operator-(complex1 e) {
		  complex1 d;
		  d.Re = Re - e.Re;
		  d.Im = Im - e.Im;
		  return d;
	  };
	  
};
#endif