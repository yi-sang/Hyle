def is_prime(n):
    if n < 2:
        return 0
    for i in range(2, int(n**0.5) + 1):
        if not n % i:
            return 0
    return 1
a, b = map(int, input().split())
for v in range(a, b + 1):
    if is_prime(v):
        print(v)
