def solution(left, right):
    cnt = 0
    s_cnt = 0
    for i in range(left, right + 1):
        for j in range(i):
            j += 1
            if i % j == 0 :
                cnt += 1
        
        if cnt % 2 == 0:
            s_cnt += i
        else:
            s_cnt -= i
        print(s_cnt)
        cnt = 0
    return s_cnt