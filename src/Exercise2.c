/*
2. Write a function to calculate the factorial with given integer n,
which satisfies the following:
	if n is odd, factorial = 1 * 3 * 5 * … * n
	if n is even, factorial = 2 * 4 * 6 * … * n
Ex:
______________________________________
| Input: 11                          |
| Output: 10395                      |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	int n = atoi(argv[1]);
	int result1, result2;
	//Your codes here
	int i;
    result1 = 1;
    result2 = 1;
    i = 2;
    while(i < n+1)
    {
        if(i % 2 == 0)
        {
            result2 *= i;
        }
        else
      {
        result1 *= i;
      }
        i++;
    }
    if (i % 2 ==0)
    {
    printf("%d", result1);
    }
    else {
    printf("%d", result2);
    }
    getc;
    return 0;
}
