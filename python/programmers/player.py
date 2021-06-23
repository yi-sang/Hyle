# dictionary를 통한 풀이
def solution(participant, completion):
    answer = {}
    for i in participant:
        answer[i] = answer.get(i, 0) + 1
    for j in completion:
        answer[j] -= 1
    for k in answer:
        if answer[k] == 1:
            return k
# collections를 통한 풀이
from collections import Counter

def solution(participant, completion):
    cnter_participant = Counter(participant)
    cnter_completion = Counter(completion)
    cnter = cnter_participant - cnter_completion
    print(list(cnter)) # 리스트화하면 values들의 값만 들어온다.
    return list(cnter)[0] 
        

# def solution(participant, completion):
#     answer = collections.Counter(participant) - collections.Counter(completion)
#     return list(answer.keys())[0]