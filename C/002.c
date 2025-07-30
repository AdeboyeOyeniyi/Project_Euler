/*****************************************************************************/
/* Includes:                                                                 */
/*****************************************************************************/
#include <stdlib.h>
#include <stdio.h>

__int64_t sum = 0;

__int64_t findsum(int number);

int main()
{
    sum = findsum(4000000);

     printf("The sum is %ld\n", sum);
    return EXIT_SUCCESS;
}

__int64_t findsum(int number) {
    __int64_t answer = 10;

    int fib1 = 2;
    int fib2 = 8;
    int fib = 0;

    while (fib <= number) {
        fib = (4*fib2)+fib1;
        fib1 = fib2;
        fib2 = fib;
        if (fib2 > number)break;

        answer += fib;
     
    }


    return answer;


}