# 숫자 카드 게임

N, M = map(int, input().split())
array = []
for i in range(N) :
    s = list(map(int, input().split()))
    s.sort()
    array.append(s)
array.sort(reverse=1)
print(array[0][0])