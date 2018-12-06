// Assignment of Chunlin Wu (cw34973)
#include <iostream>
#include <cmath>
using std::cout;
using std::endl;
using std::cin;

struct vector {double x; double y;};

double angle(struct vector b){
  double ang;
  ang = atan2(b.y,b.x);
  return ang;
}


int main() {
  struct vector a;
  double alpha, pifrac;

  cout << "input coordiantes 1" << endl;
  cin >> a.x;
  cout << "input coordiantes 2" << endl;
  cin >> a.y;

  alpha = angle(a);
  pifrac = (4.*atan(1.0)) / alpha;
  cout << "Angle of (" << a.x << "," << a.y << ")" << " is " << alpha << " or pi/" << pifrac << endl;

  return 0;
}
