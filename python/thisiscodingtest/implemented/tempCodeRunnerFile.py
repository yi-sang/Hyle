d = [0, 1, 2, 3]

# cnt = 0
# real_cnt = 1
# next_x = 0
# next_y = 0

# while True :

#     if dir == 0 : # 북
#         next_y = y - 1
#     elif dir == 1 : # 동
#         next_x = x + 1
#     elif dir == 2 : # 남
#         next_y = y + 1
#     elif dir == 3 : # 서
#         next_x = x - 1

#     if array[next_x][next_y] == 1 :
#         dir = d[dir-1]
#         cnt += 1
#         if cnt == 4 :
#             if dir == 0 : # 북
#                 if array[x + 1][y] == 0 :
#                     next_x = x + 1
#                     next_y = y
#                 else :
#                     break
#             elif dir == 1 : # 동
#                 if array[x][y - 1] == 0 :
#                     next_x = x
#                     next_y = y - 1
#                 else :
#                     break
#             elif dir == 2 : # 남
#                 if array[x - 1][y] == 0 :
#                     next_x = x - 1
#                     next_y = y
#                 else :
#                     break
#             elif dir == 3 : # 서
#                 if array[x][y + 1] == 0 :
#                     next_x = x
#                     next_y = y + 1
#                 else :
#                     break

#     else :
#         x = next_x
#         y = next_y
#         cnt = 0
#         real_cnt += 1

# print(real_cnt)
