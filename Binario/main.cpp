#include <iostream>
using namespace std;
#define tamanio(a) (sizeof(a)/sizeof(a[0]));

int main()
{
    int b,i,j,k;
    int a[10]={1,2,3,4,5,6,7,8,9};
    cout<<tamanio(a);

  i= 0;
  j= 10-1;
  b=8;
  do
  {
     k= (i+j)/2;
      if (a[k]<=b)
        i=k+1;
      if (a[k]>=b)
        j= k-1;
  }
   while (i<=j);
   cout<<"elemento esta en "<<a[k];
}




