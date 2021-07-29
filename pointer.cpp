
#include <stdio.h>

#include <iostream>
#include<math.h>
using namespace std;

int main() {

int i=4; *j,**k;
j=&i;
k=&j
printf (“k=%u \n”,&k); 
printf (“j=%u \n”,&j);
printf (“i=%d \n”,*(&i));
printf (“k=%d \n”,*k);

    return 0;
}
