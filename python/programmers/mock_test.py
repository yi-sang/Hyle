def solution(answers):
    answer = []
    way_1 = [1, 2, 3, 4, 5] * 2000
    way_2 = [2, 1, 2, 3, 2, 4, 2, 5] * 1250
    way_3 = [3, 3, 1, 1, 2, 2, 4, 4, 5, 5] * 1000
    cnt = [0] * 3
    
    j = 0
    for i in answers:
        if i == way_1[j]:
            cnt[0] += 1
        if i == way_2[j]:
            cnt[1] += 1
        if i == way_3[j]:
            cnt[2] += 1
        j += 1
    
    for i in range(3):
        if cnt[i] == max(cnt):
            answer.append(i + 1)
    
    
    return answer