/*
We can solve this problem without the help of computer.

the multiples of 3 are:

S1= 3 + 9 + 12 + ... + 999

the multiples of 5 are:

S2= 5 + 10 + 15 + 20 + ... + 995

The sum is, 

S= S1 + S2

This is an arithmatic series.

from 1 to 10 number of multiples of 3 is 3.
we have 100 rows then. So, n-th term = 999, is present.

999 = 3 + (n-1)x 3

therefore, n= 333.
*/

```
/*
Project Euler
Problem 1.
Abu Dozana Tahmid
*/
#include <stdio.h>

int main()
{

    int i, sum=0;

    for(i=1; i<1000; i++)
    {
        if( ( (i%3) ==0) || ( (i%5) == 0) )
        {
            printf("%d\t",i);
            sum= sum+i;
        }
    }

    printf("\n Sum: %d", sum);

    return 0;
}
```

