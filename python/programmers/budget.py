def solution(d, budget):
    d.sort()
    cnt = 0
    print(d)
    for i in d:
        budget -= i
        cnt += 1
        if budget < 0:
            cnt -= 1
            break
    return cnt