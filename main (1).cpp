#include <iostream>
using namespace std;
int main() {
int i,n,m=0,flag=0;
  cout<<"Enter the number to check Prime: ";
  cin>>n;
  m=n/2;
  for(i=2;i<=m;i++)
    {
      if(n%i==0)
      {
        cout<<"This is not Prime number ";
        flag=1;
        break;
      }
      }
      if(flag==0)
      
        cout<<"This is Prime number "<<endl;
  return 0;
}