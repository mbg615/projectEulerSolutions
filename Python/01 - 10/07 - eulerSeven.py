def is_prime(n):
    from math import sqrt
    if n % 2 == 0 and n > 2:
        return False
    return all(n % i for i in range(3, int(sqrt(n)) + 1, 2))

def main():
    counter, number = 6, 13
    while counter < 10001:
        number += 1
        test_prime = is_prime(number)
        if test_prime:
            counter += 1
    print(number, "is the 10001st prime number")

if __name__ == "__main__":
    main()
