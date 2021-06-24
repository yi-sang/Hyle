def solution(n, lost, reserve):
    
    for i in lost[:]: #원본에 영향없도록 복제하는 느낌
        if i in reserve:
            lost.remove(i)
            reserve.remove(i)
    n -= len(lost)
    print(lost)
    for i in lost[:]:
        for j in reserve[:]:
            if i == j + 1 or i == j - 1:
                n += 1
                lost.remove(i)
                reserve.remove(j)
                break
    print(lost)            
    answer = n
    return answer