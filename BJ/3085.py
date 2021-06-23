n = int(input())
array = []
map = []
x, y = 0, 0

for _ in range(n):
    candy = list(input())
    array.append(candy)
for _ in range(n - 1):
    map.append([str(0)]*(n - 1))
maxi = 0

def check(maxi):
    cnt = 0
    for i in range(n - 1):
        for j in range(n):
            if array[i][j] == array[i + 1][j]:
                cnt += 1
                if cnt >= maxi:
                    maxi = cnt
    cnt = 0
    for k in range(n):
        for l in range(n - 1):
            if array[k][l] == array[l][l + 1]:
                cnt += 1
                if cnt >= maxi:
                    maxi = cnt
            else:
                cnt = 0
    return(maxi)

def width(array, x, y):
    if y == n - 1:
        return array
    else:
        array[x][y], array[x][y + 1] = array[x][y + 1], array[x][y]
    return array

def height(array, x, y):
    if x == n - 1:
        return array
    else:
        array[x][y], array[x + 1][y] = array[x + 1][y], array[x][y]
    return array

while True:
    array = width(array, x, y)
    array = height(array, x, y)
    
    maxi = check(maxi)
    

    print(f"x={x},y={y}")
    y += 1
    if x == n - 1 and y == n - 1:
        break
    elif y == n - 1:
        x += 1
        y = 0

print(maxi)
    
    