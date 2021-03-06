// Assignment of Chunlin Wu (cw34973)
#include <iostream>
#include <cmath>
using std::cout;
using std::endl;
using std::cin;

void rotate(double &x, double &y, double alpha){
  double x_prime,y_prime;
  x_prime = x;
  y_prime = y;

  x = cos(alpha)*x_prime - sin(alpha)*y_prime;
  y = sin(alpha)*x_prime + cos(alpha)*y_prime;
}

double main(){
  double x,y,alpha;

  cout << "Please input the value x" << endl;
  cin >> x;

  cout << "Please input the value y" << endl;
  cin >> y;

  cout << "Please input the angle alpha" << endl;
  cin >> alpha;
  
  rotate(x,y,alpha);

  cout << x << ", " << y << endl;

  return 0;
}
