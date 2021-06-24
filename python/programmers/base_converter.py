def solution(n):
    array = []
    answer = 0
    while n >= 1:
        array.append(n % 3)
        n = n // 3
    array.reverse()    
    k = 1
    for i in array:
        if i != 0:
            answer += i*k
        k *= 3
    return answer
# str형태의 숫자를 n진법으로 바꾸기 answer = int(str, n)