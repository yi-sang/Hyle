N = int(input())

h, m, s, cnt = 0, 0, 0, 0

for i in range(N+1) :
    h += 1
    for j in range(60) :
        m += 1
        for k in range(60) :
            s += 1
            if h % 10 == 3 or h//10 == 3 \
                or m % 10 == 3 or m//10 == 3 \
                    or s % 10 == 3 or s//10 == 3 :
                    cnt += 1
            # 파이썬의 장점!
            # if '3' in str(h) + str(m) + str(s) : 
            #     cnt += 1
        s = 0
    m = 0

print(cnt)