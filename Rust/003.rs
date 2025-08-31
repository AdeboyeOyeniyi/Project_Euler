fn largest_prime_factor(mut n: u64) -> u64 {
    let mut largest_factor = 0;

    // Handle factor 2
    while n % 2 == 0 {
        largest_factor = 2;
        n /= 2;
    }

    // Handle odd factors
    let mut i = 3;
    while i * i <= n {
        while n % i == 0 {
            largest_factor = i;
            n /= i;
        }
        i += 2;
    }

    // If n is a prime number greater than 2
    if n > 2 {
        largest_factor = n;
    }

    largest_factor
}

fn main() {
    let number = 600851475143;
    println!("The largest prime factor of {} is {}", number, largest_prime_factor(number));
}