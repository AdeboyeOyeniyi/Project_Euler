/*****************************************************************************/
/* Includes:                                                                 */
/*****************************************************************************/
#include <stdlib.h>
#include <stdio.h>

int sum = 0;   // variable holding the sum

int findsum(int number);

int main() {
    sum = findsum(1000);

    printf("The sum is %d\n", sum);

return EXIT_SUCCESS;
}

int findsum(int number) {
    int answer = 0;
    // loop through all the numbers and any number divisible by 3 or 5 is added to sum
    for (int i=0; i < number; i++) {
        if ((i%3 == 0) || (i%5 == 0)) {
            answer+=i;
        }
    }

    return answer;
}