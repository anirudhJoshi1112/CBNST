#include<bits/stdc++.h>
using namespace std;
int main(){
  float t,tv,rv;
  int d;
  cout<<"enter the true value";
  cin>>t;
  cout<<"enter the no. of decimal places you want";
  cin>>d;
  int factor=pow(10.0,d);
  tv=int(t*factor)/factor;
  rv=int(t*factor+0.5)/factor;
  cout<<"origanal value"<<t<<endl;
  cout<<"rounded value"<<rv<<endl;
  return 0;
}
