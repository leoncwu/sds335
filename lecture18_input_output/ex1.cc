#include <iostream>
#include <iomanip>

using std:: cin;
using std:: cout;
using std:: endl;
using std:: setw;
using std:: setbase;



int main(){
  
  cout << setbase(16) ;

  for(int i=0; i<16 ; i++){
    for(int j=0; j<16; j++){
      cout << i << j << ' ';
    }
    cout << ' ' << endl;
  }


  return 0;
}
