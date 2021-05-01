# 204.-count-prime-leetcode

Suppose we are required to count the number of primes that are less than 21. Start by creating an array that contains 21 integers (each index represents an integer).

Array of 21 integers

Figure 1. An array of 21 integers which we'll use to mark primes and non-primes.

Now, let's start with the smallest prime number we know, which is 2. We mark the multiples of this number as non-primes in the array. To mark a number as non-prime, we set a sentinel value of -1 in the array at the index corresponding to that number. E.g. the number 4 is not a prime number, so we mark primes[4] = -1.

Multiples of "2" marked as composites
