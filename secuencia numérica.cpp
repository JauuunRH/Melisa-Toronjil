#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;
  int main()
   {
      for(int i=1000;i>0; i-=10){
      cout<<i<<",";
      if(i% 100==10){
      cout<<endl;
      }
    }
    return 0;
}
