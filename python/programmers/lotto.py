from collections import Counter

def solution(lottos, win_nums):
    score = [6, 5, 4, 3, 2, 1]
    m_score = [0, 6, 5, 4, 3, 2, 1]
    answer = []
    maxi_score = 0
    maxi = Counter(lottos)
    mini = Counter(lottos)
    wini = Counter(win_nums)
    maxi_score = len(list((wini & maxi).values()))
    mini_score = len(list((wini & mini).values()))
    maxi_score += maxi[0]
    print(lottos)
    if lottos == [0, 0, 0, 0, 0, 0]:
        answer.append(1)
        answer.append(6)
    elif maxi_score == 0 and mini_score == 0:
        answer.append(6)
        answer.append(6)
    else:
        answer.append(score[maxi_score - 1])
        answer.append(m_score[mini_score])
     
    
    return answer