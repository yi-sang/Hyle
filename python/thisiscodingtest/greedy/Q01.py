n = int(input())
data = list(map(int, input().split()))
data.sort()

groups = 0
count = 0

for v in data:
    count += 1
    if count >= v:
        groups += 1
        count = 0
print(groups)

