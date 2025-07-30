#include <iostream>  

__int64_t sum = 0;

__int64_t findsum(int number);



int main()
{
    //an even number occurs in the fibonacci sequence every 3 iterations
    sum = findsum(4000000);

     std::cout << "The sum is " <<  sum <<std::endl;
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