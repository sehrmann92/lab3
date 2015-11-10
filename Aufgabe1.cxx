#include <iostream>
#include <complex>
#include <cmath>

using namespace std;

int main(){
  int N=100;
  double dphi=2*M_PI/(N-1);
  complex<double> z[N];
  complex<double> ii=complex<double>(0.0,1.0);
  
  for(int i=0;i<N;i++){
    z[i]=exp(i*dphi*ii);    
  }
  
  for(int i=0;i<N;i++){
    cout<<i*dphi<<"\t"<<real(z[i])<<"\t"<<imag(z[i])<<"\t"<<abs(z[i])<<endl;    
  }
  return 0;
}