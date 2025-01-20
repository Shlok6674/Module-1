def is_prime(number):
    # Not prime if 1 or less
    if number <= 1:
        return False
    # Check factors from 2 to sqrt(number)
    for i in range(2, int(number ** 0.5) + 1):
        # Not prime if factor found
        if number % i == 0:
            return False
    # Prime if no factors found
    return True

# Example usage
num = int(input("Enter a number: "))
if is_prime(num):
    print(f"{num} is a prime number.")
else:
    print(f"{num} is not a prime number.")