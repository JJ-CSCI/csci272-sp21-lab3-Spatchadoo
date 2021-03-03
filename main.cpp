//------------------------------
//  DO NOT MODIFY NEXT LINE
//------------------------------
#include "catch.hpp"
//------------------------------

// Put the assignment code here

class Quaternion{
  double coefone;
  double coeftwo;
  double coefthree;
  double coeffour;
public:
  Quaternion(double a, double b, double c, double d){
    coefone = a;
    coeftwo = b;
    coefthree = c;
    coeffour = d;
  }

Quaternion operator+(const Quaternion& z)const{
  Quaternion here{0,0,0,0};
  here.coefone = this->coefone + z.coefone;
  here.coeftwo = this->coeftwo + z.coeftwo;
  here.coefthree = this->coefthree + z.coefthree;
  here.coeffour = this->coeffour + z.coeffour;
  return here;
}

Quaternion operator-(const Quaternion& z)const{
  Quaternion minus{0,0,0,0};
  minus.coefone = this->coefone - z.coefone;
  minus.coeftwo = this->coeftwo - z.coeftwo;
  minus.coefthree = this->coefthree - z.coefthree;
  minus.coeffour = this->coeffour - z.coeffour;
  return minus;
}
Quaternion operator*(const double& yn)const{
  Quaternion multi{0,0,0,0};
  multi.coefone = this->coefone * yn;
  multi.coeftwo = this->coeftwo * yn;
  multi.coefthree = this->coefthree * yn;
  multi.coeffour = this->coeffour * yn;
  return multi;
}

bool operator==(const Quaternion& z)const{
  if (this->coefone == z.coefone){
    if (this->coeftwo == z.coeftwo){
      if (this->coefthree == z.coefthree){
        if (this->coeffour == z.coeffour){
          return true;
        }
        else{
          return false;
        }
      }
      else{
        return false;
      }
    
    }else{
      return false;
      }
    }
    else{
      return false;
    }
  }
};

//------------------------------
//   DO NOT MODIFY TEST CASES
//------------------------------
TEST_CASE( "Assignment" ) {
    SECTION( "q1" ) {
        Quaternion q{1.0, 2.0, 3.0, 4.0};
        Quaternion p{1.0, 2.0, 3.0, 4.0};
        REQUIRE( q == p );
    }
    SECTION( "q2" ) {
        Quaternion q{1.0, 2.0, 3.0, 4.0};
        Quaternion p{1.0, 2.0, 3.0, 4.0};
        Quaternion r{2.0, 4.0, 6.0, 8.0};
        REQUIRE( (q + p) == r );
    }
    SECTION( "q3" ) {
        Quaternion q{1.0, 2.0, 3.0, 4.0};
        Quaternion p{1.0, 2.0, 3.0, 4.0};
        Quaternion r{0.0, 0.0, 0.0, 0.0};
        REQUIRE( (q - p) == r );
    }
    SECTION( "q3" ) {
        Quaternion q{1.0, 2.0, 3.0, 4.0};
        Quaternion r{2.0, 4.0, 6.0, 8.0};
        REQUIRE( (q * 2.0) == r );
    }
}
//------------------------------
