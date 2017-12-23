#include <stdio.h>

int main()
{
  int zx, nn3 = 0, nn5 = 0, nn15 = 0,num;
  printf("Enter the number");
  scanf("%d",&num);    // scanning the number
  for (zx = 0; zx < num; zx++) 
  {
    if (zx % 3 == 0) {            //for multiples of 3
      nn3 += zx;
    }
    if (zx % 5 == 0) {            // for multiples of 5
      nn5 += zx;
    }
    if (zx % 15 == 0) {           // for multiples of 15
      nn15 += zx;
  }
}
printf("%d\n", nn3 + nn5 - nn15); // adding multiples of 3 and 5 and subtracting multipls of 15
  return 0;
}
