# 큰 수의 법칙
# 수학적 접근

N, M, K = map(int, input().split())
array = list(map(int, input().split()))
array.sort(reverse=1)

ans = 0
# 가장 큰 수가 더해지는 횟수 계산
cnt = int(M / (K + 1)) * K # 정수화
cnt += M % (K + 1)

ans = 0
ans += cnt * array[0] # 가장 큰 수 더하기
ans += (M - cnt) * array[1] # 두 번째로 큰 수 더하기

print(ans)
