def is_prime(n):
    from math import sqrt
    if n % 2 == 0 and n > 2:
        return False
    return all(n % i for i in range(3, int(sqrt(n)) + 1, 2))

if __name__ == "__main__":
    sum = 0
    for i in range(0, 2000000, 1):
        if(is_prime(i)):
            sum += i
    print(sum)
