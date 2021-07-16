N = int(input())
i = 0
while N != 1:
    div = 2 + i
    if not N % div:
        print(div)
        N //= div
    else:
        i += 1