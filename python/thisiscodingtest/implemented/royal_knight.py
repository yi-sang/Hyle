a = input()
b = [0, 0]
b[1] = int(ord(a[0]) -  'a')
b[0] = int(a[1]) - 1
array = [[0] * 8 for _ in range(8)]

ary = [[2, 1], [2, -1], [-2, 1], [-2, -1], [1, -2], [1, 2], [-1, -2], [-1, 2]]
x, y = b[0], b[1]
print(x, y)

cnt = 0
res = 0

for step in ary :
    next_x = x + step[1] # 내부 변수가 따로 존재
    next_y = y + step[0] # i 가 최신화 되면서 초기화
    if next_x >= 1 and next_x <= 8 and next_y >= 1 and next_y <= 8 :
        res += 1
print(res)