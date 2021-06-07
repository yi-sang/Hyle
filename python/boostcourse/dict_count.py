counts = dict()
cnts = dict()
line = input('Enter a line of text : ')
words = line.split()
print('words:', words)
print('Counting...')
for word in words :
    if word in counts :
        counts[word] = counts[word] + 1
    else :
        counts[word] = 1
print('counts =', counts)        

for word in words :
    cnts[word] = cnts.get(word, 0) + 1
print('cnts =', cnts)