def solution(a, b):
    summ = 0
    for i in range(len(a)):
        for j in range(len(b)):
            if i == j:
                summ += a[i] * b[j]
    
    answer = summ
    return answer