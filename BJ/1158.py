count, num = map(int, input().split())
josephus = [i for i in range(1, count+1)]
result = []
seq = num-1
while len(josephus):
    if len(josephus) < seq :
        seq = seq % len(josephus)
    else:
        result.append(str(josephus.pop(seq)))
        seq += (num-1)
print("<", ", ".join(result), ">", sep='')