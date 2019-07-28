#include <cmath>
#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
  double xo,x, xt, asli;
  int k;
  cout<<"How Iteration work ?"<<endl;
  cout<<endl;
  cout<<"Masukkan nilai Xo : ";
  cin>>xo;
  cout<<"Masukkan nilai k : ";
  cin>>k;
  cout<<endl;
  asli = sqrt(k);
  cout<<k<<" akarnya "<<setw(10)<<setprecision(10)<<asli<<left;
  cout<<endl;
  xo=x;
  do
  {
    xt = 0.5*(x+(k/x));
    cout<<left<<setw(10)<<x;
    cout<<setw(10)<<setprecision(3)<<xt<<left;
    cout<<endl;
    x = xt;
  }
  while(x!=asli);
  return 0;
}
