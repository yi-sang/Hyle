N = int(input())

parts = list(map(int, input().split()))

M = int(input())

searching_parts = list(map(int, input().split()))

for i in range(N):
    cnt = 0
    for j in range(M):
        if parts[i] == searching_parts[j]:
            searching_parts[j] = -1      
for k in range(M):
    if searching_parts[k] == -1:
        print("yes", end = " ")
    else :
        print("no", end = " ")
