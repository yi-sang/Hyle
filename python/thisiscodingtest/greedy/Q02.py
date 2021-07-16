data = input()
res = int(data[0]) # data[i] != len(data) 이런 거 보다는

for i in range(1, len(data)): # 이렇게 활용
    num = int(data[i])
    if num <= 1 or res <= 1:
        res += num
    else:
        res *= num
print(res)
