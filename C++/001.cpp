#include <iostream>

int sumfactor(int factor, int limit) {
    int N = (limit-1)/factor;  // to find number of divisible units
    int sum = factor *(N*(N+1)/2);
    return sum;

}

int main() {
    int sum3 = 0, sum5 = 0, sum15 = 0;
    int result = 0;
    // Find sum of numbers that are a factor of 3
    sum3 = sumfactor(3, 1000);
    // Find sum of numbers that are a factor of 5
    sum5 = sumfactor(5, 1000);
    // Find sum of numbers that are a factor of 15
    sum15 = sumfactor(15, 1000);

    //The result is the sum of all numbers divisible by 3 and the sm of all numbers divisible by 5 
    //The sum of all numbers divisible by 15 was also removed as it would duplicate twice
    result = sum3+sum5 -sum15;

    std::cout << "The answer is" << result;


    return 0;
}