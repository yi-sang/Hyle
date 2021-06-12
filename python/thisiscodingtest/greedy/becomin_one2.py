# 1이 될 때까지
n, k = map(int, input().split())
result = 0

while 1 :
    target = (n // k) * k
    result += (n - target)
    n = target
    if n < k :
        break
    # K로 나누기
    result += 1
    n //= k

# 남은 수에 대하여 1씩 빼기
result += (n - 1)
print(result)