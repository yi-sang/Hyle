# 큰 수의 법칙

N, M, K = map(int, input().split())
array = list(map(int, input().split()))
array.sort(reverse=1)

ans = 0
cnt = 0
while True :
    for j in range(K) :
        if cnt != M :
            if j != K - 1 :
                ans = ans + array[0]
                cnt += 1
            else :
                ans = ans + array[1]
                cnt += 1
        else :
            break
print(ans)
