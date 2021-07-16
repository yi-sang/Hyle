# 큰 수의 법칙
N, M, K = map(int, input().split())
array = list(map(int, input().split()))
array.sort()
first = array[N - 1] # 가장 큰 수
second = array[N - 2] # 두 번째로 큰 수

result = 0

while True:
    for i in range(K): # 가장 큰 수를 k번 더하기
        if M == 0:
            break
        result += first
        M -= 1
    if M == 0:
        break
    result += second
    M -= 1 

print(result)