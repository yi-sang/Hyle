from collections import Counter

def solution(nums):
    answer = 0
    l = len(nums)
    a = Counter(nums)
    if (l/2) > len(a) :
        answer = len(a)
    else:
        answer = l/2
    return answer