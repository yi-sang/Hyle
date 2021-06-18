b = int(input())

n = 19
m = 19
array = [[0] * m for _ in range(n)]
for k in range(b):
    c, d = map(int, input().split())
    array[c - 1][d - 1] = 1

for i in range(19):
    for j in range(19):
        if j != 18:
            print(array[i][j], end = " ")
        else :
            print(array[i][j])
print()

# 일반적 2중 배열
# a = list()
# for i in range(8) :
#     a.append([])
#     for j in range(8) :
#         a[i].append(0)
