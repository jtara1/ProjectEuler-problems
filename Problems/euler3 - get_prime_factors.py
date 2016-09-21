import time

def get_prime_factors(n):
    factors = []
    primes = []
    p = 1
    while(n > 1):
        p += 1
        for i in primes:
            if p % i == 0:
                break # if p is not prime, break
        primes.append(p)
        while(n % p == 0):
            n /= p
            factors.append(p)
    print (factors)

init_time = time.time()
get_prime_factors(600851475143)
print ("Time:", time.time() - init_time)
