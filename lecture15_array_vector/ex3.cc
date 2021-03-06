// Assignment of Chunlin Wu (cw34973)
#include <iostream>
#include <cmath>
#include <vector>
#include <cstdlib>
using std::cout;
using std::endl;
using std::cin;
using std::vector;


double square_sum(vector<double> y){
  double sum = 0.0;
  for(auto e : y){
    sum = sum + e*e;
  }
  return sum;
}

int main(){
  double sum, scale;
  int length;

  cout << "input the length of the vector" << endl;
  cin >> length;

  vector<double> x(length);

  for(int ct=0; ct<length; ct++){
    x[ct] = 1.*rand()/RAND_MAX;
    //    cout << x[ct] <<" ";
  }
  //  cout << "" << endl;

  sum = square_sum(x);
  //  cout << "square sum of elements before scaling: " << sum << endl;
  scale = sqrt(sum);

  for(auto &e : x){
    e = e / scale;
  }
  sum = square_sum(x);
  cout << "square sum of elements after scaling: " << sum << endl;

  return 0;
}
