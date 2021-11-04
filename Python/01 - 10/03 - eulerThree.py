def main():
    n = 600851475143
    for i in range(1, n, 1):
        if (n % i == 0):
            n = n / i
            if (n == 1):
                print("The largest prime factor of 600851475143 is", i)

if __name__ == "__main__":
    main()
