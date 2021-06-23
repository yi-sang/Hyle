def solution(array, commands):
    answer = []
    for command in commands:
        brray = array[command[0] - 1: command[1]]    
        brray.sort()
        answer.append(brray[command[2] - 1])
    
    return answer