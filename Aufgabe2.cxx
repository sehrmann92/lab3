#include <iostream>
#include <complex>
#include <cmath>

using namespace std;

complex<double> fuphi(double phi);

int main(){
  int N=100;
  double dphi=2*M_PI/(N-1),phi=-M_PI;
  complex<double> z[N];
  // complex<double> ii=complex<double>(0.0,1.0);
  
  for(int i=0;i<N;i++){
    z[i]=fuphi(phi+i*dphi);    
  }
  
  for(int i=0;i<N;i++){
    cout<<i*dphi+phi<<"\t"<<real(z[i])<<"\t"<<imag(z[i])<<"\t"<<abs(z[i])<<endl;    
  }
  return 0;
}

complex<double> fuphi(double phi){
  complex<double> iii=complex<double>(1.0,1.0);
  complex<double> z=tan(phi*(iii));
  return z;
}