#include <iostream>
#include <complex>
#include <cmath>

using namespace std;


int main(){
  int N=400;
  complex<double> za,zn;
  
  for(double re=-2.0; re <= 2.0; re += 0.01){
    for(double im=-2.0; im <= 2.0; im += 0.01){
      int count = 0;
      za = complex<double>(re,im);
      zn = za - ((complex<double>(-1.0,0.0))+za*za*za )/((complex<double>(3.0,0.0))*za*za);
      while((abs(za-zn) >= 1E-8) && (count < N)){
	za = zn;
	zn = za - ((complex<double>(-1.0,0.0))+za*za*za )/((complex<double>(3.0,0.0))*za*za);
	count++;
      }
      cout<<re<<"\t"<<im<<"\t"<<count<<endl;
    }
  }
  
  return 0;
}
