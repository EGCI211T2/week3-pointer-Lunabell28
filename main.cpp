#include <iostream>
#include <iomanip>
#define SIZE 10

using namespace std;

int main(int argc,char *argv[]){
  int *pa, *pb, temp;
int n,i;
  n = argc - 1;                            
  pa = new int[n];                       
  int *start = pa;                         

  for(i = 0; i < n; i++) {
     *pa = atoi(argv[i+1]);                
     pa++;
  }
  pa = start;
//pa = pa-n;
//delete[] pa;
cout<<"Original: ";
for (i=0; i<n-1; i++ ,pa++){
   cout<<setw(3)<<*pa ;//<<endl;
  //cout<<pa<<endl;
}
cout<<setw(3)<<*pa<<endl;

pb = pa;  
pa -= (n-1);
for (i=0; i<n/2; i++)
{
   temp = *pa;  
   *pa = *pb;  
   *pb = temp;
   pa++;  pb--;
}
pa-=(n/2);
cout<<"Reversed: ";
for (i=0; i<n-1; i++ ,pa++){
   cout<<setw(3)<<*pa ;//<<endl;
  //cout<<pa<<endl;
}
cout<<setw(3)<<*pa<<endl;

//pa -= (n-1);
delete[] start;


return 0;
}
