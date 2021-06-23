n = int(input())
d = [0] * 30001
def making_one(n) :
    for i in range(2, n + 1):
        d[i] = d[i - 1] + 1
        if i % 2 == 0:
            d[i] = min(d[i], d[i//2] + 1) # 함수의 호출 횟수를 구해야 하기 때문이다.
        if i % 3 == 0:
            d[i] = min(d[i], d[i//3] + 1)
        if i % 5 == 0:
            d[i] = min(d[i], d[i//5] + 1)
    return(d[n])

print(making_one(n))

