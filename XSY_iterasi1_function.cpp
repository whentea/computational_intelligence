//how to ilustrate the iteration
#include <cmath>
#include <iostream>
#include <iomanip>
using namespace std;

void garis();
void iteration(double x, int k, double asli);


int main()
{
  double xo, x, asli;
  int k;
  cout<<"How Iteration work ?"<<endl;
  cout<<endl;
  cout<<"Masukkan nilai xo : ";
  cin>>xo;
  cout<<"Masukkan nilai k : ";
  cin>>k;
  cout<<endl;
  asli = sqrt(k);
  cout<<"Angka utama adalah k dengan nilai : "<<k<<endl;
  cout<<"Dengan nilai akar : "<<setw(12)<<left<<setprecision(10)<<asli<<endl;
  cout<<endl<<endl;
  //i=0;
  x=xo;
  garis();
  cout<<endl;
  cout<<left<<setw(12)<<"Iteration"<<setw(15)<<"xt"<<setw(15)<<"x(t+1)"<<endl;
  garis();
  cout<<endl;
  iteration(x, k, asli);
  return 0;
}

void garis()
{
    for(int n=1;n<45;n++)
        cout<<"-";
}

void iteration(double x, int k, double asli)
{
   int i=0;
   double xt;
   do
  {
    xt = (x+(k/x))/2;
    cout<<left<<setw(12)<<i<<setw(15)<<setprecision(10)<<x;
    cout<<setw(15)<<setprecision(10)<<xt<<left;
    cout<<endl;
    x = xt;
    i=i+1;
  }
  while(x != asli);
}
