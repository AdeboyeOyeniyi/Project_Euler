#include <iostream>

long long largestPrime(long a)
{
    long long largestFactor = -1 ;

    if(a%2==0)
    {
        largestFactor = 2;
        a/=2;
    }

    for (long long i = 3; i * i <= a; i += 2) {
        while (a % i == 0) {
            largestFactor = i;
            a /= i;
        }
    }
    
    if (a > 2) {
        largestFactor = a;
    }

    return largestFactor;

}

int main() {
    long long number = 600851475143;
    std::cout << "The largest prime factor of " << number << " is " << largestPrime(number) << std::endl;
    return 0;
}