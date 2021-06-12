N = int(input())
map = [[0] * N for _ in range(N)]

x = 0
y = 0
arrive = 1

dir = list(input().split())

for i in range(len(dir)) :
    if dir[i] == 'R':
        if y + 1 != N:
            y += 1
            
    elif dir[i] == 'L' :
        if y - 1 != -1:
            y -= 1
            
    elif dir[i] == 'U' :
        if x - 1 != -1:
            x -= 1
            
    elif dir[i] == 'D' :
        if x + 1 != N:
            x += 1
    map[x][y] = arrive
    arrive += 1

print(x + 1, y + 1)    
