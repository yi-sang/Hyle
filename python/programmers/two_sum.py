def solution(numbers):
    k = list()
    for i in range(len(numbers)):
        for j in range(i+1, len(numbers)):
            k.append(numbers[i] + numbers[j])
    return sorted(list(set(k))) # set은 hashset로 찾음 bbst가 아님, 정렬 필요!