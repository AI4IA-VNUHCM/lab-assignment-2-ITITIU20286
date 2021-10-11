/*
4.	Receive an array of n integers, n is even. 
Sort the first half in increasing order and second half decreasing order
Ex:
 ____________________________________
| Input:  8 7 9 2 1 5 2 0            |
| Output: 2 7 8 9 5 2 1 0            |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	argc--;
	int n = argc;
	int test_array[n],i;
	for(i=0; i<n;i++){
		test_array[i] = atoi(argv[i+1]);
	}
	//Your codes here
	int j,temp;
 for (i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
	    {
	        if(test_array[j] < test_array[i])
	        {
	            temp = test_array[i];
	            test_array[i] = test_array[j];
	            test_array[j] = temp;
	        }
	    }
    }
    //printing first half of the array

  
    for (i = 0; i < n / 2; i++)
    {
        printf ("%d ", test_array[i]);
    }
    //printing second half of the array
  
    for (i = n - 1; i >= n / 2; i--)
    {
        printf ("%d ", test_array[i]);
    }
    return 0;
}