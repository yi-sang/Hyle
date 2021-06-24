# def solution(absolutes, signs):
#     k = 0
#     print(signs)
#     for i in absolutes[:]:
#         if signs[k] == False:
#             i *= -1
#             absolutes[k] = i
#         k += 1
#     print(absolutes)
#     return sum(absolutes)

# zip 사용법
array = []
def solution(absolutes, signs):
    answer=0
    for absolute,sign in zip(absolutes,signs):
        if sign:
            answer+=absolute
        else:
            answer-=absolute
        array.append(absolute)
        array.append(sign)
    print(array)
    return answer