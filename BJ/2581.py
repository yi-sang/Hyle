def is_prime(n):
    if n < 2:
        return 0
    for i in range(2, int(n**0.5) + 1):
        if not n % i:
            return 0
    return 1

a = int(input())
b = int(input())
s = 0
cnt = 0
temp = 0
for v in range(a, b + 1):
    if is_prime(v):
        cnt += 1
        if cnt == 1:
            temp = v
        s += v
if s != 0:
    print(s)
    print(temp)
else:
    print(-1)