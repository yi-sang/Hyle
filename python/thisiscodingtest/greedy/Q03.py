data = input()
now_val = data[0]
z_cnt = 0
o_cnt = 0
for i in range(1, len(data)):
    if now_val == '0':
        if data[i] != data[i-1]:
            z_cnt += 1
            now_val = '1'
    elif now_val == '1':
        if data[i] != data[i-1]:
            o_cnt += 1
            now_val = '0'
print(min(z_cnt, o_cnt))