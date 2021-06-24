import itertools
def is_prime_number(summ):
    for j in range(2, summ):
        if summ % j == 0:
            return  False
    return True

def solution(nums):
    answer = 0
    summ = 0
    c = list(itertools.combinations(nums, 3))

    for ls in c:
        summ = 0
        for i in ls:
            summ += i
        if is_prime_number(summ):
            answer += 1
            
    # [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.

    return answer