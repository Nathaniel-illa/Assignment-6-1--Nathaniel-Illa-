#include <iostream>
#include <cmath>
using namespace std;

// Function to validate input range
int inputValidate(int begin, int end)
{
    // Return 1 if invalid, otherwise return 0
    return (begin > end || begin < 2 || end < 0) ? 1 : 0;
}

// Helper function to check if a number is prime
bool isPrime(int num)
{
    if (num <= 1) return false;
    if (num == 2) return true; // 2 is the only even prime number
    if (num % 2 == 0) return false;
    for (int i = 3; i <= sqrt(num); i += 2)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

// Function to print prime numbers and return their count
int getListprime(int begin, int end)
{
    int count = 0;
    bool first = true; // Flag to handle space between numbers

    for (int i = begin; i <= end; ++i)
    {
        if (isPrime(i))
        {
            if (!first) {
                cout << " "; // Print space before next number
            }
            cout << i;
            first = false;
            ++count;
        }
    }
    cout << endl; // Print a newline after the list of primes
    return count;
}