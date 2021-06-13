n, m = map(int, input().split())

x, y, dir = map(int, input().split())

array = []
for i in range(n) :
    a = list(map(int, input().split()))
    array.append(a)

d = [0, 1, 2, 3]

cnt = 0
real_cnt = 1
n_x = x
n_y = y

while True :

    if dir == 0 : # 북
        n_y = y - 1
    elif dir == 1 : # 동
        n_x = x + 1
    elif dir == 2 : # 남
        n_y = y + 1
    elif dir == 3 : # 서
        n_x = x - 1
    
    if array[n_x][n_y] == 1 :
        dir = d[dir-1]
        print(f"dir은 {dir}")
        cnt += 1
        print(cnt)
        print(f"n_x는 {n_x}")
        
    else :
        x = n_x
        y = n_y
        print(x, y)
        cnt = 0
        real_cnt += 1

#         if cnt == 4 :
#             if dir == 0 : # 북
#                 if array[x + 1][y] == 0 :
#                     n_x = x + 1
#                     n_y = y
#                 else :
#                     break
#             elif dir == 1 : # 동
#                 if array[x][y - 1] == 0 :
#                     n_x = x
#                     n_y = y - 1
#                 else :
#                     break
#             elif dir == 2 : # 남
#                 if array[x - 1][y] == 0 :
#                     n_x = x - 1
#                     n_y = y
#                 else :
#                     break
#             elif dir == 3 : # 서
#                 if array[x][y + 1] == 0 :
#                     n_x = x
#                     n_y = y + 1
#                 else :
#                     break



# print(real_cnt)
